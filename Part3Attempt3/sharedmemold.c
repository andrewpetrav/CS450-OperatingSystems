#include "types.h"
#include "user.h"

int
main(void)
{
	void* shadd1 = (void*)getsharedpage(0,1);
	void* shadd2 = (void*)getsharedpage(1,1);
	void* shadd3 = (void*)getsharedpage(1,2);
	void* shadd4 = (void*)getsharedpage(2,3000000);

	*((int*)(sharedpageaddress)) = 876858;
	void* sharedaddtwop = (void*)getsharedpage(2,1);
	
	int r=fork();
	if(r==0){
	
		
		void* sharedcpageaddress = (void*)getsharedpage(0,1);
		void* sharedaddtwo = (void*)getsharedpage(2,1);
		
		*((int*)(sharedaddtwo)) = 5;
		printf(1, "\nAddress is: %p\nAddress two is %p:\n", sharedcpageaddress, sharedaddtwo);
		printf(1, "\nContent of sharedcpageaddress is: %d\nContents of sharedaddtwo from child: %d\n", *((int*)(sharedcpageaddress)),
			                                            			        	*((int*)(sharedaddtwo)));
		exit();
	}

	wait();	

	printf(1, "\nContents of shared add two from parent: %d\n", sharedaddtwop);
	
	return 0;
}

#include "types.h"
#include "user.h"

int main(){
	void* reg = GetSharedPage(0,1);
	for(int i=0;i<10;i++){
		printf(1,"%d ", ((char*)reg)[i]);
	}
	printf(1, "\n");

	//write
	strcpy(reg, "region");
	//read
	printf(1,"%s\n", reg);

	exit();
}

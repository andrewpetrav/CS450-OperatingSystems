//Andrew Petravicius A20442138
#include "types.h"
#include "user.h"
#include "memlayout.h"


int main(void){
	getsharedpage(0,1); 
	getsharedpage(1,1);
	getsharedpage(1,2);
	getsharedpage(2,9999999999);
	getsharedpage(3,1);

	freesharedpage(0);
	getsharedpage(0,1);

	if(fork()==0){
		freesharedpage(1);
	}
	
	freesharedpage(1);	

}

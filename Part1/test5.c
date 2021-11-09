#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void){
	if(fork()==0){
		malloc(sizeof(int));
	}
	wait();
	return 0;
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
	char* string="test3string";
	void* ptr=strdup(string);
	ptr+=4;
	exit(1);
	ptr-=4;
	free(ptr);
	return 0;
}

#include <stdlib.h>

int main(void){
	void* mem=malloc(sizeof(int));
	free(mem);
	return 0;
}

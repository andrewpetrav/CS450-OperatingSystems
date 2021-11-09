#include <stdlib.h>
#include <stdio.h>

int main(void){
	typedef struct {
		void* blah;
		void* bleh;
	}mystruct;

	mystruct* l=(mystruct*)malloc(sizeof(mystruct));
	l->blah=malloc(sizeof(mystruct));
	l->bleh=malloc(sizeof(mystruct));

	((mystruct*)(mystruct->blah))->blah=malloc(sizeof(mystruct));
	return 0;
}

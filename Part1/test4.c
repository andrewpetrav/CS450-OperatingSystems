#include <stdlib.h>
#include <stdio.h>

int main(void){
	typedef struct {
		void* blah;
		void* bleh;
	}leak;

	leak l=(leak)malloc(sizeof(leak));
	l->blah=malloc(sizeof(leak));
	l->bleh=malloc(sizeof(leak));

	((leak*)(leak->blah))->blah=malloc(sizeof(leak));
	return 0;
}

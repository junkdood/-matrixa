#ifndef SWAP_H
#define SWAP_H

void swap(int* a, int* b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
}

#endif

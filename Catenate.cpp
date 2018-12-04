#include <stdio.h>
#include <stdlib.h>

int* Catenate(int a[], int b[], int len1, int len2){
	int* c=(int*)malloc(sizeof(int)*(len1+len2));
	int i;
	for(i=0;i<len1;i++){
		*(c+i)=a[i];
	}
	for(i=0;i<len2;i++){
		*(c+len1+i)=b[i];
	}
	return c;
}

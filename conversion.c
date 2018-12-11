#include<stdio.h>
#include<stdlib.h>

typedef struct zhan{
	int* elem;
	int top;
	int size;
}zhan;

int chu(zhan* s){
	s->elem=(int*)malloc(10*sizeof(int));
	if(s->elem==NULL)return 0;
	s->size=10;
	s->top=-1;
	return 1;
}
int freee(zhan* s){
	free(s->elem);
	s->elem=NULL;
	s->top=-1;
	s->size=0;
	return 0;
}
int push(zhan* s,int e){
	if(s->top>=s->size-1)return 0;
	s->top++;
	*((s->elem)+(s->top))=e;
	return 1;
}
int out(zhan* s,int* e){
	if(s->top<=-1)return 0;
	*e=*((s->elem)+(s->top));
	s->top--;
	return 1;
}
void shuwei(){
	int x;
	zhan s;
	chu(&s);
	int e;
	scanf("%d",&x);
	while(x){
		push(&s,x%8);
		x=x/8;
	}
	while(out (&s, &e)){
		printf("%d",e);
	}
	freee(&s);
	printf("\n");
}

int main(){
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		shuwei();
	}
	return 0;
}

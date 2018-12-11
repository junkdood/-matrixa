#include<stdio.h>
#include<stdlib.h>

typedef struct zhan{
	int* elem;
	int top;
	int size;
}zhan;

int chu(zhan* s,int n){
	s->elem=(int*)malloc((n+1)*sizeof(int));
	if(s->elem==NULL)return 0;
	s->size=n+1;
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
void diandao(zhan* s){
	int c,i;
	for(i=s->top;i>0;i--){
		c=*((s->elem)+i);
		*((s->elem)+i)=*((s->elem)+i-1);
		*((s->elem)+i-1)=c;
	}
}
void puke(int n){
	zhan s;
	int i;
	int e;
	chu(&s,n);
	for(i=n;i>0;i--){
		push(&s,i);
	}
	while(s.top>1){
		out(&s,&e);
		printf("%d ",e);
		diandao(&s);
	}
	out(&s,&e);
	printf("%d ",e);
	out(&s,&e);
	printf("%d \n",e);
	freee(&s);
}

int main(){
	int n;
	scanf("%d",&n);
	puke(n);
	return 0;
}

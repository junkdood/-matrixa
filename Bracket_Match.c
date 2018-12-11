#include<stdio.h>
#include<stdlib.h>

typedef struct zhan{
	char* elem;
	int top;
	int size;
}zhan;

int chu(zhan* s){
	s->elem=(char*)malloc(10*sizeof(char));
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
int push(zhan* s,char e){
	if(s->top>=s->size-1)return 0;
	s->top++;
	*((s->elem)+(s->top))=e;
	return 1;
}
int out(zhan* s,char* e){
	if(s->top<=-1)return 0;
	*e=*((s->elem)+(s->top));
	s->top--;
	return 1;
}
void pipei(char* a){
	int i;
	zhan s;
	chu(&s);
	char e;
	for(i=0;i<100;i++){
		if(a[i]=='{'){
		push(&s,a[i]);
		}
		if(a[i]=='['){
		push(&s,a[i]);
		}
		if(a[i]=='('){
		push(&s,a[i]);
		}
		if(a[i]=='}'){
			out(&s,&e); 
			if(e!='{'){
				printf("No\n");
				return;
			}
		}
		if(a[i]==']'){
			out(&s,&e);
			if(e!='['){
				printf("No\n");
				return;
			}
		}
		if(a[i]==')'){
			out(&s,&e);
			if(e!='('){
				printf("No\n");
				return;
			}
		}
	}
	if(s.top<=-1)
	printf("Yes\n");
	else
	printf("No\n");
	freee(&s);
}

int main(){
	char a[100];
	scanf("%s",a);
	pipei(a);
	return 0;
}

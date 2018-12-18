#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct zhan{
	char* elem;
	int top;
	int size;
}zhan;

typedef struct zhans{
	double* elem;
	int top;
	int size;
}zhans;

int chu(zhan* s){
	s->elem=(char*)malloc(201*sizeof(char));
	if(s->elem==NULL)return 0;
	s->size=201;
	s->top=-1;
	return 1;
}
int chus(zhans* s){
	s->elem=(double*)malloc(201*sizeof(double));
	if(s->elem==NULL)return 0;
	s->size=201;
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
int freees(zhans* s){
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
int pushs(zhans* s,double e){
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
int outs(zhans* s,double* e){
	if(s->top<=-1)return 0;
	*e=*((s->elem)+(s->top));
	s->top--;
	return 1;
}
void houzui(char* a){
	int n,i;
	char b;
	zhan fu;
	chu(&fu);
	n=strlen(a);
	for(i=0;i<n;i++){
		if(a[i]<='9'&&a[i]>='0'){
			printf("%c",a[i]);
		}
		else if(a[i]=='+'||a[i]=='-'){
			if(fu.top==-1){
				push(&fu,a[i]);
			}
			else{
				out(&fu,&b);
				while(b!='('&&b!='+'&&b!='-'){
					printf("%c",b);
					out(&fu,&b);
				}
				if(b=='('){
					push(&fu,b);
					push(&fu,a[i]);
				}
				else if(b=='+'||b=='-'){
					printf("%c",b);
					push(&fu,a[i]);
				}
				
			}
		}
		else if(a[i]=='*'||a[i]=='/'){
			if(fu.top==-1){
				push(&fu,a[i]);
			}
			else{
				out(&fu,&b);
				if(b=='('||b=='+'||b=='-'){
					push(&fu,b);
					push(&fu,a[i]);
				}
				else if(b=='*'||b=='/'){
					printf("%c",b);
					push(&fu,a[i]);
				}
			}
		}
		else if(a[i]=='('){
			push(&fu,a[i]);
		}
		else if(a[i]==')'){
			out(&fu,&b);
			while(b!='('){
				printf("%c",b);
				out(&fu,&b);
			}
		}
	}
	while(fu.top>-1){
		out(&fu,&b);
		printf("%c",b);
	}
	printf("\n");
	freee(&fu);
}


void suansu(char* a){
	int n,i;
	char b;
	double c;
	double d;
	zhans su;
	zhan fu;
	chus(&su);
	chu(&fu);
	n=strlen(a);
	for(i=n-1;i>=0;i--){
		if(a[i]<='9'&&a[i]>='0'){
			pushs(&su,a[i]-'0');
		}
		else if(a[i]=='+'||a[i]=='-'){
			push(&fu,a[i]);
		}
		else if(a[i]=='*'){
			if(a[i-1]<='9'&&a[i-1]>='0'){
				outs(&su,&c);
				c=c*(a[i-1]-'0');
				pushs(&su,c);
				i--;
			}
			else{
				push(&fu,a[i]);
			}
		}
		else if(a[i]=='/'){
			if(a[i-1]<='9'&&a[i-1]>='0'){
				outs(&su,&c);
				c=(a[i-1]-'0')/c;
				pushs(&su,c);
				i--;
			}
			else{
				push(&fu,a[i]);
			}
		}
		else if(a[i]==')'){
			push(&fu,a[i]);
		}
		else if(a[i]=='('){
			out(&fu,&b);
			outs(&su,&c);
			while(b!=')'){
				if(b=='+'){
					outs(&su,&d);
					c=c+d;
				}
				else if(b=='-'){
					outs(&su,&d);
					c=c-d;
				}
				out(&fu,&b);
			}
			out(&fu,&b);
			if(a[i-1]=='/'){
				if(b=='*'){
					outs(&su,&d);
					c=c/d;
					pushs(&su,c);
				}
				else if(b=='/'){
					outs(&su,&d);
					c=c*d;
					pushs(&su,c);
				}
				else{
					push(&fu,b);
					pushs(&su,c);
				}
			}
			else{
				if(b=='*'){
					outs(&su,&d);
					c=c*d;
					pushs(&su,c);
				}
				else if(b=='/'){
					outs(&su,&d);
					c=c/d;
					pushs(&su,c);
				}
				else{
					push(&fu,b);
					pushs(&su,c);
				}
			}
			
		}
	}
	outs(&su,&d);
	while(su.top!=-1&&fu.top!=-1){
		out(&fu,&b);
		outs(&su,&c);
		if(b=='+'){
			d=d+c;
		}
		else if(b=='-'){
			d=d-c;
		}
	}
	printf("%.4f\n",d);
	freees(&su);
	freee(&fu);
}

int main(){
	char a[200];
	scanf("%s",a);
	houzui(a);
	suansu(a);
	return 0;
}

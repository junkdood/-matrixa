#include<stdio.h>
#include<stdlib.h>

typedef struct node {
 int value;
 struct node* next;
} node ;

node* head;
node* tl;
void creat(int n,int k){
	int i;
	node* a,b;
	head=(node*)malloc(sizeof(node));
	a=head;
	for(i=k;i<n+k-1;i++){
		node* b=(node*)malloc(sizeof(node));
		a->next=b;
		if(i%n)a->value=i%n;
		else a->value=n;
		a=b;
		b=NULL;
	}
	tl=a;
	a->next=head;
	if(k-1)a->value=k-1;
	else a->value=n;
}

void huan(int m){
	node* a=head;
	node* b=tl;
	node* c;
	int i;
	while(a!=a->next){
		for(i=0;i<m-1;i++){
			b=a;
			a=a->next;
		}
		printf("%d ",a->value);
		c=a;
		a=a->next;
		b->next=a;
		free(c);
	}
	printf("%d\n",a->value);
	free(a);
	a=NULL;
}


int main(){
	int n,k,m;
	scanf("%d %d %d",&n,&k,&m);
	creat(n,k);
	huan(m);
	return 0;
}

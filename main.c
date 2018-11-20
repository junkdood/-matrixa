#include<stdio.h>

int square(int a,int b,int p){
	if(b==0){
		return 1;
	}
	else if(b%2!=0){
		return (square((a*a)%p,b/2,p)*a)%p;
	}
	else{
		return (square((a*a)%p,b/2,p))%p;
	}
}

int main(){
	int a,b,p,i,t=1;
	scanf("%d %d %d",&a,&b,&p);
	a=a%p;
	t=square(a,b,p);
	printf("%d\n",t%p);
	return 0;
}

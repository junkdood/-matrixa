#include<stdio.h>
int a[7]={0},b[7]={0,1,2,3,4,5,6};
int size;

void permutation(int n){
	int i;
	if(n>size){
		for(i=1;i<=size;i++){
			printf("%d",a[i]);
		}
		printf("\n");
	}
	else{
		for(i=1;i<=size;i++){
			if(b[i]!=9){
				a[n]=b[i];
				b[i]=9;
				permutation(n+1);
				b[i]=i;
			}
		}
	}
}

int main(){
	scanf("%d",&size);
	permutation(1);
	return 0;
}

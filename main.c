#include<stdio.h>

int part(int* a,int l,int r){
	int c=*(a+r);
	int i=l-1,j,z;
	for(j=l;j<r;j++){
		if(*(a+j)<c){
			if(i!=j){
				i++;
				z=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=z;
			}
		}
	}
	i++;
	z=*(a+i);
	*(a+i)=*(a+r);
	*(a+r)=z;
	return i;
}

void qs(int* a,int l,int r){
	int p;
	if(l<r){
		p=part(a,l,r);
		qs(a,l,p-1);
		qs(a,p+1,r);
	}
}



int main(){
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	qs(a,0,n-1);
	for(i=0;i<n-1;i++){
		printf("%d ",a[i]);
	}
	printf("%d\n",a[n-1]);
	return 0;
}

#include<stdio.h>

int main(){
	int n,i,h,l,r;
	scanf("%d",&n);
	int a[n+1][n+1];
	h=1;
	l=(n+1)/2;
	for(i=1;i<=n*n;i++){
		a[h][l]=i;
		if(i%n==0){
			h=h+1;
		}
		else if(h==1){
			h=n;
			l++;
		}
		else if(l==n){
			h--;
			l=1;
		}
		else{
			h--;
			l++;
		}
	}
	for(i=1;i<=n;i++){
		for(r=1;r<n;r++){
			printf("%d ",a[i][r]);
		}
		printf("%d\n",a[i][n]);
	}
	return 0;
}

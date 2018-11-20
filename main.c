#include<stdio.h>

int s(int *a,int mubiao,int q,int ss){
	if(mubiao==*(a+(q+ss)/2)){
		return (q+ss)/2;
	}
	else if(mubiao<*(a+(q+ss)/2)){
		return s(a,mubiao,q,(q+ss)/2);
	}
	else if(mubiao>*(a+(q+ss)/2)){
		return s(a,mubiao,(q+ss)/2,ss);
	}
}

int main(){
	int i,n,m;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	int b[m];
	for(i=0;i<m;i++){
		scanf("%d",&b[m]);
		printf("%d\n",s(a,b[m],0,n));
	}
	return 0;
}

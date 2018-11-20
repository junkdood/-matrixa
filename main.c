#include<stdio.h>

void scan(int *a,int n,int m){
	int i,rr;
	for(i=0;i<n;i++){
		for(rr=0;rr<m;rr++){
			scanf("%d",a+i*m+rr);
		}
	}
}

int main(){
	int n,m,r,i,rr,rrr;
	scanf("%d %d %d",&n,&m,&r);
	int a[n][m],b[m][r],c[n][r];
	scan(a,n,m);
	scan(b,m,r);
	for(i=0;i<n;i++){
		for(rr=0;rr<r;rr++){
			c[i][rr]=0;
			for(rrr=0;rrr<m;rrr++){
				c[i][rr]+=a[i][rrr]*b[rrr][rr];
			}
			if(rr==r-1)
			printf("%d\n",c[i][rr]);
			else
			printf("%d ",c[i][rr]);
		}
	}
	return 0;
}

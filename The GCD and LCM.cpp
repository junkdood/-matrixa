#include<stdio.h>

int min(int x,int y){
	int e;
	if(x<y)e=x;
	else e=y;
	return e;
}

int max(int x,int y){
	int e;
	if(x>y)e=x;
	else e=y;
	return e;
}

int GCD(int x,int y){
	int i=max(x,y);
	int r=min(x,y);
	int Y=1;
	while(Y!=0){
		Y=i%r;
		i=r;
		r=Y;
	}
	return i;
}

int LCM(int x,int y){
	int i=max(x,y);
	int r=min(x,y);
	int g;
	for(g=1;i%r!=0;g++){
		i=max(x,y);
		i=i*g;
	}
	return i;
}

int main(){
	int t,i,r,G,L;
	scanf("%d",&t);
	int a[t][2];
	for(i=0;i<t;i++){
		for(r=0;r<2;r++){
			scanf("%d",&a[i][r]);
		}
	}
	for(i=0;i<t;i++){
		if(a[i][0]>=1&&a[i][1]>=1){
			G=GCD(a[i][0],a[i][1]);
			L=LCM(a[i][0],a[i][1]);
			printf("%d %d\n",G,L);
		}
		else
		printf("invalid\n");
	}
	return 0;
}

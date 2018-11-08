#include<stdio.h>

int main(){
	int y,m,d,yz,mz,dz,z,Z,i;
	scanf("%d %d %d",&y,&m,&d);
	yz=0;
	for(i=1;i<y;i++){
		if((i%4==0&&i%100!=0)||i%400==0){
			yz=yz+366;
		}
		else{
			yz=yz+365;
		}
	}
	if((y%4==0&&y%100!=0)||y%400==0){
		if(m==1)mz=0;
		if(m==2)mz=31;
		if(m==3)mz=60;
		if(m==4)mz=91;
		if(m==5)mz=121;
		if(m==6)mz=152;
		if(m==7)mz=182;
		if(m==8)mz=213;
		if(m==9)mz=244;
		if(m==10)mz=274;
		if(m==11)mz=305;
		if(m==12)mz=335;
	}
	else{
		if(m==1)mz=0;
		if(m==2)mz=31;
		if(m==3)mz=59;
		if(m==4)mz=90;
		if(m==5)mz=120;
		if(m==6)mz=151;
		if(m==7)mz=181;
		if(m==8)mz=212;
		if(m==9)mz=243;
		if(m==10)mz=273;
		if(m==11)mz=304;
		if(m==12)mz=334;
	}
	dz=d-1;
	z=yz+mz+dz;
	Z=z%7+1;
	printf("%d\n",Z);
	return 0;
}

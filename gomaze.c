#include<stdio.h>

int go(int* maze,int i,int j,int x,int y){
	if(x==i&&y==j){
		printf("%d %d\n",x,y);
		return 1;
	}
	else if(*(maze+x*12+y)==1){
		return 0;
	}
	else if(*(maze+x*12+y)==0){
		*(maze+x*12+y)=1;
		if(!(go(maze,i,j,x,y-1))&&!(go(maze,i,j,x-1,y))&&!(go(maze,i,j,x,y+1))&&!(go(maze,i,j,x+1,y))){
			return 0;
		}
		else{
			printf("%d %d\n",x,y);
			return 1;
		}
	}
}



void main(){
	int i = 0, j = 0, k = 0, l = 0;
	int maze[7][12] = {
		1,1,1,1,1,1,1,1,1,1,1,1,
		1,0,0,0,0,0,1,0,0,1,1,1,
		1,0,1,0,1,0,1,0,1,1,1,1,
		1,0,1,0,0,0,1,0,1,1,1,1,
		1,0,1,1,1,1,1,0,1,1,1,1,
		1,0,0,0,0,0,0,0,0,0,0,1,
		1,1,1,1,1,1,1,1,1,1,1,1
	};
	scanf("%d %d %d %d", &i, &j, &k, &l);
	go(maze, i, j, k, l);
}

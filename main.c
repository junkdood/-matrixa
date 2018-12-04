#include<stdio.h>
#include<string.h>

struct Student{
	char name[11];
	int Chinese,Math,English,Physics,Chemistry,Biology;
};

int main(){
	int n,i,nn,r;
	scanf("%d",&n);
	struct Student stu[n];
	for(i=0;i<n;i++){
		scanf("%s",stu[i].name);
	}
	for(i=0;i<n;i++){
		scanf("%d",&stu[i].Chinese);
	}
	for(i=0;i<n;i++){
		scanf("%d",&stu[i].Math);
	}
	for(i=0;i<n;i++){
		scanf("%d",&stu[i].English);
	}
	for(i=0;i<n;i++){
		scanf("%d",&stu[i].Physics);
	}
	for(i=0;i<n;i++){
		scanf("%d",&stu[i].Chemistry);
	}
	for(i=0;i<n;i++){
		scanf("%d",&stu[i].Biology);
	}
	scanf("%d",&nn);
	char need[11];
	for(i=0;i<nn;i++){
		scanf("%s",need);
		for(r=0;r<n;r++){
			if(strcmp(need,stu[r].name)==0){
				printf("%d %d %d %d %d %d\n",stu[r].Chinese,stu[r].Math,stu[r].English,stu[r].Physics,stu[r].Chemistry,stu[r].Biology);
				printf("%d\n",(stu[r].Chinese+stu[r].Math+stu[r].English+stu[r].Physics+stu[r].Chemistry+stu[r].Biology)/6);
				break;
			}
		}
	}
	return 0;
}

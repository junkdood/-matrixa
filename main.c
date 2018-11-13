#include<stdio.h>

int f(int h,int s){
    int i,ff=0;
    if(h<=1){
        return 1;
    }
    else{
        for(i=0;i<s&&i<h;i++){
            ff+=f(h-i-1,s);
        }
        return ff;
    }
}

int main(){
    int h,s,ff;
    scanf("%d %d",&h,&s);
    ff=f(h,s);
    printf("%d\n",ff);
    return 0;
}

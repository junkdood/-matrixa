#include<stdio.h>
#include<string.h>

int main(){
    int n,N,i,r;
    scanf("%d\n",&N);
    char a[N][2],b[1000];
    for(i=0;i<N;i++){
        scanf("%c %c\n",&a[i][0],&a[i][1]);
    }
    scanf("%s",b);
    n=strlen(b);
    for(r=0;r<n;r++){
        for(i=0;i<N;i++){
            if(b[r]==a[i][1]){
                b[r]=a[i][0];
				break;
            }
        }
    }
    for(r=0;r<n;r++){
    	printf("%c",b[r]);
    }
    printf("\n");
    return 0;
}

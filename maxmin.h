#ifndef MAXMIN
#define MAXMIN

typedef int (*PF)(int,int);

int max(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
int min(int a,int b){
	if(a>b){
		return b;
	}
	else{
		return a;
	}
}

PF maxmin(int c){
	if(c==1){
		return max;
	}
	else{
		return min;
	}
}

#endif

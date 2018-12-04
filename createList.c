
typedef struct node {
  int num;
  struct node* next;
}node;

node* createList(node array[], int n){
	int i;
	for(i=0;i<n-1;i++){
		array[i].next=&array[i+1];
	}
	array[n-1].next=0;
	return array;
}

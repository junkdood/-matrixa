#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <stdbool.h>

typedef struct node {
 int value;
 struct node* next;
} node ;

int size; // the size of linked list
node* head; // the head of linkedlist

//insert the value to the right position
//if the position is not valid, return false
//if insert successfully, return true
bool insert(int position, int value){
	int i;
	if(position<0||position>size){
		return 0;
	}
	node* a=(node*)malloc(sizeof(node));
	node* b;
	if(a==0){
		return 0;
	}
	if(position==0){
		a->next=head;
		a->value=value;
		head=a;
	}
	else{
		b=head;
		for(i=0;i<position-1;i++){
			b=b->next;
		}
		a->next=b->next;
		b->next=a;
		a->value=value;
	}
	size++;
	return 1;
}

// return the value in the given position
int get(int position){
	int i;
	node* a=head;
	for(i=0;i<position;i++){
		a=a->next;
	}
	return a->value;
}

//clear the linkedlist, remember to free the memory you allocated
void clear(){
	node* temp;
	while(head!=0){
		temp=head;
		head=head->next;
		free(temp);
	}
}

#endif

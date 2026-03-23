#include <stdio.h>
#include <stdlib.h>
struct stack {
	int data;
	struct stack *next;
};

typedef struct stack *stk;
stk top = NULL;

stk push(int x) {
	stk ptr,temp;
	temp=(stk)malloc(sizeof(struct stack));
	temp->data=x;
	temp->next=NULL;

	if(top==NULL){
		top=temp;
	}
	else{
		temp->next=top;
		top=temp;
		//printf("Successfully pushed.\n");
	}
	printf("Successfully pushed.\n");
	return top;
}

void display() {
	stk ptr=top;
	if(top==NULL){
		printf("Stack is empty.\n");
	}
	else{
	printf("Elements of the stack are : ");
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
		printf("\n");
	}
}


























	
	

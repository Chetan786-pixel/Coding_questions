#define STACK_MAX_SIZE 10

int arr[STACK_MAX_SIZE];
int top = -1;

void push(int element) {
	if(top==STACK_MAX_SIZE-1){
		printf("Stack is overflow.\n");
	}
	else{
		top=top+1;
		arr[top]=element;
		printf("Successfully pushed.\n");
	}
}

void display() {
	if(top==-1){
		printf("Stack is empty.\n");
	}
	else{
		printf("Elements of the stack are : ");
		for(int i=top;i>=0;i--){ //last in first out so decreasing order
			printf("%d ",arr[i]);
		}
		printf("\n");
	}
}

























	
	

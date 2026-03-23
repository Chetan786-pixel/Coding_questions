
#define STACK_MAX_SIZE 10

int arr[STACK_MAX_SIZE];
int top = -1;

void pop() {
	int temp;
if(top==-1){
	printf("Stack is underflow.\n");
}
	else{
		temp=arr[top];
		top=top-1;
		printf("Popped value = %d\n",temp);
	}
	
}
//pop or peek ma 1 difference vo h pop ma last element delete hota h baas

void peek() {
	int temp;
	if(top==-1){
		printf("Stack is underflow.\n");
	}
	else{
		temp=arr[top];
		printf("Peek value = %d\n",temp);
	}
}

void isEmpty() {
	if(top==-1){
		printf("Stack is empty.\n");
	}
	else{
		printf("Stack is not empty.\n");
	}
}

void push(int element) {
	if(top == STACK_MAX_SIZE - 1) {
		printf("Stack is overflow.\n");
	} else {
		top = top + 1;
		arr[top] = element;
		printf("Successfully pushed.\n");
	}
}

void display() {
	if (top < 0) {
		printf("Stack is empty.\n");
	} else {
		printf("Elements of the stack are : " );
		for(int i = top; i >= 0; i--) {
			printf("%d ",arr[i]);
		}
		printf("\n");
	}
}


























	
	

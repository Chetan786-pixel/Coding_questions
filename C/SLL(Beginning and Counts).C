struct node {
	int data;
	struct node *next;
};
typedef struct node *NODE;

NODE createNode() {
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	return temp;
}

NODE insertAtBegin(NODE first, int x) {
	struct node*ptr=first;
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;

	temp->next=ptr;
	first=temp;
	return first;
}

int count(NODE first) {
	struct node *ptr=first;
	int count=0;
	while(ptr!=NULL){
		ptr=ptr->next;
		count++;
	}
	//printf("NULL\n");
	return count;
}

void traverseList(NODE first) {
	NODE temp = first;
	while (temp != NULL) {
		printf("%d --> ",temp -> data);
		temp = temp -> next;
	}
	printf("NULL\n");
}	
























	
	

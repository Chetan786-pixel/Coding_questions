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

NODE addNodes(NODE first, int x) {
	struct node *ptr=first;
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	
	if(first == NULL){
	   first=temp;
	}
	else{
		while(ptr->next!=NULL){
			ptr=ptr->next;
		}
		ptr->next=temp;
	}
	
	return first;
}

void traverseList(NODE first) {
	struct node *ptr=first;
	while(ptr!=NULL){
		printf("%d --> ",ptr->data);
		ptr=ptr->next;
	}
	printf("NULL\n");
	
}

























	
	

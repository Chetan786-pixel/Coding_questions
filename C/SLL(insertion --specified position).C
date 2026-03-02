struct node {
	int data;
	struct node *next;
};
typedef struct node *NODE;

NODE createNode() {
	NODE temp;
	temp = (NODE) malloc(sizeof(struct node));
	temp -> next = NULL;
	return temp;
}

NODE insertAtPosition(NODE first, int pos, int x) {
	struct node *ptr=first;
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;

	//case 1 insert at beginning;
	if(pos==1){
		temp->next=first;
		first=temp;
		return first;
	}
	//case 2 traverse to (pos-1)node
	for(int i=1;i<pos-1 && ptr!=NULL;i++){
		ptr=ptr->next;
	}
	if(ptr==NULL){
		printf("No such position in SLL so insertion is not possible\n");
			return first;
	}
	temp->next=ptr->next;
	ptr->next=temp;
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
























	
	

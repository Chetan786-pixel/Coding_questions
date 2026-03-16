struct node {
	int data;
	struct node *next;
};
typedef struct node *NODE;

NODE createNodeInCLL() {
	NODE temp;
	temp = (NODE) malloc(sizeof(struct node));
	temp -> next = NULL;
	return temp;
}

NODE insertAtEndInCLL(NODE first, int x) {
	NODE ptr=first,temp;
	temp=(NODE)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	if(first==NULL){
		first=temp;
		temp->next=first;
	}
	else{
		while(ptr->next!=first){
			ptr=ptr->next;
		}
		ptr->next=temp;
		temp->next=first;
	}
	return first;
}

NODE deleteAtEndInCLL(NODE first) {
	NODE ptr=first,q=NULL;
	if(first==NULL){
		return NULL;
	}
	if(first->next==first){
		printf("The deleted item from CLL : %d\n",first->data);
		free(first);
		return NULL;
	}

	while(ptr->next!=first){
		q=ptr;
		ptr=ptr->next;
	}
	q->next=first;
	printf("The deleted item from CLL : %d\n",ptr->data);
	free(ptr);
	return first;
}

void traverseListInCLL(NODE first) {
	NODE temp = first;
	do {
		printf("%d --> ", temp -> data);
		temp = temp -> next;
	} while (temp != first);
	printf("\n");
}























	
	

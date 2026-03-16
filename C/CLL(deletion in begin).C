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

NODE insertAtBeginInCLL(NODE first, int x) {
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
		temp->next=first;
		first=temp;
		ptr->next=first;
	}
	return first;
}

NODE deleteAtBeginInCLL(NODE first) {
	NODE ptr=first,temp;
	if(first==NULL){
		return NULL;
	}
	if(first->next==first){
		printf("The deleted element from CLL : %d\n",first->data);
		free(first);
		return NULL;
	}

	while(ptr->next!=first){
		ptr=ptr->next;
	}
	temp=first;
	printf("The deleted element from CLL : %d\n",temp->data);
	first=first->next;
	ptr->next=first;
	free(temp);
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























	
	

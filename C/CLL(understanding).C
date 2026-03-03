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

NODE addNodesInCLL(NODE first, int x) {
	struct node *ptr=first;
	struct node *temp;
	
	
	temp=(struct node*)malloc(sizeof(struct node));
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
		ptr->next=temp;//isa create node sa attach karvana 
		temp->next=first;
	}
	
	return first;
	
}

void traverseListInCLL(NODE first) {
struct node *ptr=first;
	if(first==NULL){
		return ;
	}
	do{
		printf("%d --> ",ptr->data);
		ptr=ptr->next;
	}while(ptr!=first);
	printf("\n");
	
	
}	
























	
	

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
			temp->next=first;//new node phela node sa connect ho gyi;
			ptr->next=temp;//important 
				first=temp;
		}
	
	return first;
}

int countInCLL(NODE first) {
struct node *ptr=first;
	if(first==NULL){
		return 0;
	}
	int count =1;
	while(ptr->next!=first){
		//ptr=ptr->next;
		count++;
		ptr=ptr->next;
	}
	
	
	return count;
}

void traverseListInCLL(NODE first) {
	NODE temp = first;
	do {
		printf("%d --> ", temp -> data);
		temp = temp -> next;
	} while (temp != first);
	printf("\n");
}	
























	
	

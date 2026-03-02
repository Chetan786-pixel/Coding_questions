struct node {
	int data;
	struct node *next;
};
typedef struct node *NODE;

NODE createAndAddNodes(NODE first) {
	NODE temp, q;
	int x;
	printf("Enter element : ");
	scanf("%d", &x);
	while(x != -1) {
		temp = (NODE)malloc(sizeof(struct node));
		temp->data = x;
		temp->next = NULL;
		if(first == NULL) {
			first = temp;
		} else {
			q->next = temp;
		}
		q = temp;
		printf("Enter element : ");
		scanf("%d", &x);
	}
	return first;  
}

void print(NODE first) {
	NODE q = first;
	if (first == NULL) {
		printf("Single Linked List is empty\n");
	} else {
		printf("Elements in the list are : ");
		while (q != NULL) {
			printf("%d---> ", q->data);
			q = q->next;
		}
		printf("NULL\n");
	}
}

NODE concatenate(NODE t1, NODE t2) {
	struct node *ptr=t1;
	if(t1==NULL){
		return t2;
	}
	if(t2==NULL){
		return t1;
	}

	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	ptr->next=t2;
	return t1;
}

int search(NODE first, int key){

 while (first != NULL){

if (first->data == key)
 return 1;   // element found
first = first->next;
}
return 0; // element not found
}

NODE unionSLL(NODE l1, NODE l2) {
	// ISMA FIRST NHI H TOH HM USE KARENGE NODE KA ONLY.

	NODE result=NULL,temp,p,ptr;
	
	//add all elements of list l1;
	p=l1;
	while(p!=NULL){
		if(!search(result,p->data)){

		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=p->data;
		temp->next=NULL;

		if(result==NULL){
			result=temp;
		}
		else{
			ptr=result;
			while(ptr->next!=NULL){
				ptr=ptr->next;
			}
			ptr->next=temp;
		}
		}
		p=p->next;
	}
	// add unique elements of list l2;
	p=l2;
	while(p!=NULL){
		if(!search(result,p->data)){
			temp=(struct node*)malloc(sizeof(struct node));
			temp->data=p->data;
			temp->next=NULL;

			if(result==NULL){
				result=temp;
			}
			else{
				ptr=result;
				while(ptr->next!=NULL){
					ptr=ptr->next;
				}
				ptr->next=temp;
			}
		}
		p=p->next;
	}
	 return result;
}	
























	
	

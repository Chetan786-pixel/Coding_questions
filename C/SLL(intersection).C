struct node {
	int data;
	struct node *next;
};
typedef struct node * NODE;

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

//bubble sort method
NODE sort(NODE first) {
	NODE p,q;
	for(p=first;p!=NULL;p=p->next){
		for(q=p->next;q!=NULL;q=q->next){
			if(p->data>=q->data){
				int temp=p->data;
				p->data=q->data;
				q->data=temp;
			}
		}
	}
	return first;
}

NODE add(NODE l3,int x) {
	NODE ptr,temp;
	temp=(NODE)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;

	if(l3==NULL){
		l3=temp;
	}
	else{
		 ptr=l3;
		while(ptr->next!=NULL){
			ptr=ptr->next;
		}
		ptr->next=temp;
	}
	return l3;
}

int search(NODE first,int key){
while(first!=NULL){
	if(first->data==key){
		return 1;
	}
	first=first->next;
}
	return 0;
}

NODE intersectionSLL(NODE l1,NODE l2) {
	NODE result=NULL,p=l1;
	while(p!=NULL){
		if(search(l2,p->data) && !search(result,p->data)){
			result=add(result,p->data);
		}
		p=p->next;
	}
	return result;
}

void print(NODE first) {
	NODE q = first;
	if (first == NULL) {
		printf("Single Linked List is empty\n");
	} else {
		printf("Elements in the list are : ");
		while (q != NULL) {
			printf("%d---> ", q -> data);
			q = q -> next;
		}
		printf("NULL\n");
	}
}























	
	

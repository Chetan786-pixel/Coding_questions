struct node {
	int data;
	struct node *next;
};
typedef struct node *NODE;

NODE createAndAddNodes(NODE first) {
	  struct node *ptr=first;
	 struct node *temp;
	int ele;
	printf("Enter element : ");
	scanf("%d",&ele);
	// ist scanf loop start karna ka liya h 
//while condition check ka liya variable ki value honi chaiya.
	
	while(ele!=-1){
		//ele=-1 then stop loop
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=ele;
		temp->next=NULL;

		if(first==NULL){
			 first=temp;
			ptr=temp;
		}
			
		else{
			while(ptr->next!=NULL){
				ptr=ptr->next;
			}
			ptr->next=temp;
		}
		printf("Enter element : ");
			scanf("%d",&ele);
		//2nd scanf mana next iteration ke liya liya h 
	}
	return first;
}

NODE concatenate(NODE t1, NODE t2) {
	// isma *first(ist list) =t1 or *first2(2nd list) =t2;
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

void print(NODE first) {
	NODE q = first;
	if (first == NULL) {
		printf("Single Linked List is empty\n");
	} else {
		while (q != NULL) {
			printf("%d---> ", q->data);
			q = q->next;
		}
		printf("NULL\n");
	}
}	
























	
	

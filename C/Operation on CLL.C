#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};
typedef struct node *NODE;

NODE createNodeInCLL() {
	NODE temp;
	temp=(NODE)malloc(sizeof(struct node));
	temp->next=NULL;
	return temp;
}

NODE insertAtPositionInCLL(NODE first,int pos,int x) {
NODE ptr=first,temp;
	
	temp=createNodeInCLL();
	temp->data=x;

	if(first==NULL){
		if(pos==1){
			first=temp;
			temp->next=first;
			return first;
		}
		else{
		printf("Position not found\n");
	}
	return first;
}

	if(pos==1){
		while(ptr->next!=first){
			ptr=ptr->next;
		}
		temp->next=first;
		first=temp;
		ptr->next=first;
		return first;
	}

	for(int i=1;i<pos-1;i++){
		ptr=ptr->next;

		if(ptr==first){
			printf("Position not found\n");
			return first;
		}
	}

	temp->next=ptr->next;
	ptr->next=temp;
	return first;
}
NODE deleteAtPositionInCLL(NODE first,int pos) {
NODE ptr=first,temp;
	
	if(first==NULL){
		printf("CLL is empty\n");
		return NULL;
	}

	//single node
	if(first->next==first && pos==1){
		printf("Deleted element: %d\n",first->data);
		free(first);
		return NULL;
	}

	//beginnig ka node delete
	if(pos==1){
		while(ptr->next!=first){
			ptr=ptr->next;
		}
		temp=first;
		printf("Deleted element: %d\n",temp->data);
		first=first->next;
		ptr->next=first;
		free(temp);
		return first;
	}

	for(int i=1;i<pos-1;i++){
		ptr=ptr->next;

		if(ptr->next==first){
			printf("Position not found\n");
			return first;
		}
	}

	temp=ptr->next;
	ptr->next=temp->next;
	
	printf("Deleted element: %d\n",temp->data);
	free(temp);

	return first;

}

void traverseListInCLL(NODE first) {
NODE ptr=first;
	if(first==NULL){
		return;
	}
	do{
		printf("%d --> ",ptr->data);
		ptr=ptr->next;
	}while(ptr!=first);
		printf("\n");
}

void main() {
	NODE first = NULL;
	int x, pos, op;
	while(1) {
		printf("1.Insert 2.Delete 3.Display 4.Exit\n");
		printf("choice: ");
		scanf("%d", &op);
		switch(op) {
			case 1:	printf("Position: ");
					scanf("%d", &pos);
					if (pos <= 0) {
						printf("Position not found\n");
					} else {
						printf("Element: ");
						scanf("%d", &x);
						first = insertAtPositionInCLL(first, pos, x);
					}
					break;
	        case 2:	if (first == NULL) {
						printf("CLL is empty\n");
					} else {
						printf("Position: ");
						scanf("%d", &pos);
						first = deleteAtPositionInCLL(first, pos);
					}
					break;
			case 3:	if (first == NULL) {
						printf("CLL is empty\n");
					} else {
						printf("Elements in CLL are: ");
						traverseListInCLL(first);
					}
					break;
			case 4:	exit(0);
		}
	}
}

























	
	

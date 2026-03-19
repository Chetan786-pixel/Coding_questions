#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

typedef struct node * NODE;
NODE first=NULL;  //global variable
void insert(){
	NODE ptr=first,temp;
	int x;
	printf("Element: ");
	scanf("%d",&x);
	
	temp=(NODE)malloc(sizeof(struct node));
	temp->value=x;
	temp->next=NULL;

	if(first==NULL){
		first=temp;
	}
	else{
		while(ptr->next!=NULL){
			ptr=ptr->next;
		}
		ptr->next=temp;
	}
}

void delete_node(){
	NODE ptr=first,temp;
	int pos;

		printf("Position: ");
	scanf("%d",&pos);

//same steps for specified position
	if(first==NULL){
		printf("List is empty. Cannot delete.\n");
		return;
	}
	
if(pos<=0){
	printf("Invalid position\n");
	return;
}
	if(first->next==NULL){
		printf("Deleted element: %d\n",first->value);
		free(first);
		return ;
	}

	

	if(pos==1){
		temp=first;
		first=first->next;
		printf("Deleted successfully\n");
		free(temp);
		return;
	}

	for(int i=1;i<pos-1 && ptr!=NULL;i++){
		ptr=ptr->next;
	}
	
	if(ptr==NULL || ptr->next==NULL){
		printf("Invalid position\n");
		return ;
	}

	temp=ptr->next;
	ptr->next=temp->next;
	free(temp);
	printf("Deleted successfully\n");

	return;

}

void display(){
	NODE ptr=first;
	if(first==NULL){
		printf("The list is empty\n");
		return ;
	}
	else{
		printf("Elements of linked list: ");
	while(ptr!=NULL){
		printf("%d ",ptr->value);
		ptr=ptr->next;
	}
	}
	printf("\n");
}

void count(){
	NODE ptr=first;
	int count=0;
	while(ptr!=NULL){
		count++;
		ptr=ptr->next;
	}
	printf("No of elements: %d\n",count);
	return ;
}



//exit program already build in function h jo stdlib ma h.
//case 5 ma return 0;

int main() {
    int option = 0;
    while (1) {
        printf("1.Insert 2.Delete 3.Display 4.Count 5.Exit\n");
        printf("choice: ");
        scanf("%d", &option);
        switch (option) {
            case 1:
                insert();
                break;
            case 2:
                delete_node();
                break;
            case 3:
                display();
                break;
            case 4:
                count(); 
                break;
            case 5:
                return 0;  // Exit the program
            default:
                printf("Enter options from 1 to 5\n");
                break;
        }
    }
    return 0;
}
























	
	

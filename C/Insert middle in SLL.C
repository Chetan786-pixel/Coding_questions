#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
};
typedef struct node * NODE;

NODE insert(NODE first,int x){
	NODE ptr=first,temp;
	temp=(NODE)malloc(sizeof(struct node));
	temp->data=x;
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
	return first;
}

int LengthInSLL(NODE first){
	NODE ptr=first;
	int count=0;
	if(first==NULL){
		return 0;
	}
	else{
		while(ptr!=NULL){
			count++;
			ptr=ptr->next;
		}
	}
	return count;
}

NODE insertMiddle(NODE first, int v) {
    NODE ptr = first, temp;

    // create new node (same as your code)
    temp = (NODE)malloc(sizeof(struct node));
    temp->data = v;
    temp->next = NULL;

    // empty list
    if (first == NULL) {
        return temp;
    }

    // find length
    int n = LengthInSLL(first);
    int mid = n / 2;

    // move ptr to mid node
    for (int i = 1; i < mid; i++) {
        ptr = ptr->next;
    }

    // insert after mid (same pattern, bas position change)
    temp->next = ptr->next;
    ptr->next = temp;

    return first;
}

int main(){
	int n,x,v;
	NODE first=NULL;

scanf("%d",&n);

	//create list
for(int i=0;i<n;i++){
	scanf("%d",&x);
	first=insert(first,x);
}
	scanf("%d",&v); //middle insert

	//print original list
	NODE ptr=first;
	while(ptr!=NULL){
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
	printf("NULL\n");

	first=insertMiddle(first,v);

	//print changes list
	ptr=first;
	while(ptr!=NULL){
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
	printf("NULL\n");
}


























	
	

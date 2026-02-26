struct node {
	int data;
	struct node *next;
 };
typedef struct node *NODE;

NODE createNode() {
	//struct node *ptr=first;
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	return temp;
}


























	
	

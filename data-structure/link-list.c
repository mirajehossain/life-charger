#include <stdio.h>
#include <stdlib.h>

int main(void) {
 struct node{
	int data;
	struct node* next;
};

struct node *head, *prevNode;

head = NULL;
int  i;
for(i=0;i<5;i++){
	struct node* newNode = (struct node*)malloc(sizeof(struct node));

	scanf("%d",&newNode->data);
	newNode->next = NULL;
	if(head != NULL)
	{
		prevNode->next = newNode;
		prevNode = newNode;
	} else {
		head = newNode;
		prevNode = newNode;
	}
}


struct node* Print;
Print = head;
while(Print !=NULL){
	printf("%d ",Print->data);
	Print = Print->next;
}


	return 0;
}


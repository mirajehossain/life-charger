// delete middle item of the node;
#include <iostream>
using namespace std;


typedef struct node Node;
struct node {
	int data;
	Node *next;
};

Node *head = NULL, *lastNode;

void addNode(int data){
	Node *newNode = (Node *) malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = NULL;
	if(head == NULL){
		head = newNode;
		lastNode = newNode;
	} else {
		lastNode->next = newNode;
		lastNode = newNode;
	}
	
}

void deleteMiddle(int item){ 
	Node *temp, *temp2;
	temp2 = head, temp = head->next;
	
	while(temp != NULL){
		if(temp->data == item)
			break;
		temp = temp->next;
		temp2 = temp2->next;
	}
	temp2->next = temp->next;
	free(temp);
}

void printNode(){
	Node *print;
		print = head;
		while(print != NULL){
			cout<<print->data<< " ";
			print = print->next;
		}
}
int main() {
	int i, n, data, item;
	cin>>n;
	for(i=0; i<n; i++){
		cin>>data;
		addNode(data);
	}
	
	cin>>item;
	deleteMiddle(item);
	
 
	printNode();
	return 0;
}

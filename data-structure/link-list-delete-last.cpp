// delete last item of the node;
#include <iostream>
using namespace std;


typedef struct node Node;
struct node {
	int data;
	Node *next;
};

Node *head = NULL, *lastNode, *secondLast; 

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

void deleteLast(){
	lastNode = head->next;
	secondLast = head;
	while(lastNode->next != NULL){
		lastNode = lastNode->next;
		secondLast = secondLast->next;
	}
	secondLast->next = NULL;
	free(lastNode);
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
	int i, n, data, target, item;
	cin>>n;
	for(i=0; i<n; i++){
		cin>>data;
		addNode(data);
	}
	
	deleteLast();
	
 
	printNode();
	return 0;
}

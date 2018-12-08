// insert at first of the node;
#include <iostream>
using namespace std;


typedef struct node Node;
struct node {
	int data;
	Node *next;
};

Node *head = NULL, *firstNode;
	// head = NULL, lastNode = NULL;

void addFirst(int data){
	Node *newNode = (Node *) malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = NULL;
	if(head == NULL){
		head = newNode;
		firstNode = newNode;
	} else {
		newNode->next = head;
		head = newNode;
	}
	
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
	int i,n,data;
	cin>>n;
	for(i=0; i<n; i++){
		cin>>data;
		addFirst(data);
	}

	printNode();
	return 0;
}

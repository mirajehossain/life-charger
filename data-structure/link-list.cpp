#include <iostream>
using namespace std;

typedef struct node Node;
struct node {
	int data;
	Node *next;
};

Node *create_node(int item, Node *next){
	
	Node *new_node = (Node *) malloc(sizeof(Node));
	
	if(new_node == NULL){
		cout<<"Can't create new node"<<endl;
		exit(1);
	}
	
	new_node->data = item;
	new_node->next = next;
	
	return new_node;
}

int main() {
	
	int data;
	cin>>data;
	
	Node *n;
	n = create_node(data, NULL);
	cout<<n->data<<endl;
	
 	return 0;
}

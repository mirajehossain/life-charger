#include <iostream>
#include<cstdlib>
using namespace std;

typedef struct node Node;
struct node {
	int data;
	Node *next;
};

Node *head = NULL, *topNode;
int top = -1, counter = 1, size = 6;

void push(int data){
	if(counter == size){
        cout<<"Stack is overflow";
        exit(1);
	} else {
        Node *newNode = (Node *) malloc(sizeof(Node));
        newNode->data = data;
        newNode->next = NULL;
        if(head == NULL){
            head = newNode;
            topNode = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
        counter++;
        top++;
	}
}

    if(top== -1){
        cout<<"Stack is underflow";
        return;
    } else {
        Node *temp, *temp2;
        temp2 = head;
        temp = head->next;
        head = temp;
        free(temp2);
    }
}
void printStack(){
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
		push(data);
        printStack();
		cout<<endl;
    }

return 0;
}

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

void pop(){

    if(top== -1){
        cout<<"Stack is underflow";
        return;
    } else {
        Node *temp, *temp2;
        temp2 = head;
        temp = head->next;
        head = temp;
        free(temp2);
        top--;
        counter--;
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

push(1);
push(2);
push(3);
push(4);
push(6);

cout<<"Full Stack"<<endl;
printStack();
for(i=0; i<size; i++){
        char s;
    cout<<endl<<"Want to delete item from top? Y/N :";
    cin>>s;
    if(s == 'Y' || s=='y'){
        pop();
        printStack();
    } else {
        break;
    }

}
return 0;
}

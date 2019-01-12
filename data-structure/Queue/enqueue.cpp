#include<iostream>
#include<stdlib.h>
#define SIZE 5
using namespace std;

typedef struct node Node;

struct node {
    int data;
    Node *next;
};

Node *head = NULL, *last;
int total = 1;

void enqueue(int data){

    if(total< SIZE){
        Node *newNode = (Node *) malloc(sizeof(Node));
        newNode->data = data;
        newNode->next = NULL;
        if(head == NULL){
            head = newNode;
            last = newNode;
            total++;
        } else {
             last->next = newNode;
                last = newNode;
                total++;
        }
    } else {
        cout<<"Queue overflow";
        exit(0);
        }
}
void printQueue(){
	Node *print;
		print = head;

		while(print != NULL){
			cout<<print->data<< " ";
			print = print->next;
		}
		cout<<endl;
}

int main(){
    int d;
    while(cin>>d){
        enqueue(d);
        printQueue();
    }

return 0;
}

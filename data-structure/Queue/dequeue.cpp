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
int total = 0;

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

void dequeue(){
    if(total ==1){
        cout<<"Queue is underflow";
        exit(0);
    } else {
        Node *temp, *temp2;
        temp2 = head;
        temp = head->next;
        head = temp;
        free(temp2);
        total--;
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
    for(int i=0; i<5; i++){
        cin>>d;
        enqueue(d);
        printQueue();
    }

    for(int i=0; i<5; i++){
        char s;
        cout<<endl<<"Want to delete item from Queue? Y/N :";
        cin>>s;
        if(s == 'Y' || s == 'y'){
            dequeue();
            printQueue();
        } else {
            break;
        }

    }


return 0;
}

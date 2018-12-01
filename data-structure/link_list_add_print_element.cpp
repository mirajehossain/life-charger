#include<iostream>
#include <cstdlib>
using namespace std;


typedef struct node Node;
struct node{
    int data;
    Node *next;
};

Node *head = NULL, *lastNode;


void createNode(int data){
    Node *new_node = (Node*)malloc(sizeof(Node));
        new_node->data = data;
        new_node->next = NULL;
        if(head != NULL){
            lastNode->next = new_node;
            lastNode = new_node;
        } else {
            head = new_node;
            lastNode = new_node;
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
int main(){

    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int data;
        cin>>data;
        createNode(data);
    }

    printNode();

return 0;
}

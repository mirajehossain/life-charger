#include<stdio.h>
#define MAX 100

int arr[MAX];
int top = -1;

void push(int x){
    if(top == MAX-1){
        printf("Err. Stack Overflow\n");
        return;
    }

     arr[++top] = x;
}
void pop(){

    if(top == -1){
        printf("Can't pop. Stack is Empty\n");
        return;
    }
    top--;
}
void print(){
int i;
printf("Stack: ");
for(i=0;i<=top;i++){
    printf("%d ",arr[i]);
}
printf("\n");

}

int main(){

    int x;

    push(2); print();
    push(5); print();
    push(10); print();
    pop(); print();


    push(12); print();




}

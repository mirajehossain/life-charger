#include<stdio.h>
#define MAX_SIZE 1000

void printArr(int arr[],int size, int start){
    if(start>=size){
        return;
    }
    printf("%d ",arr[start]);
    printArr(arr,size,start+1);

}

int main(){
    int n,i,arr[MAX_SIZE];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printArr(arr,n,0);
    return 0;
}

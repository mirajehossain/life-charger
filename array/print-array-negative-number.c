#include<stdio.h>
#define MAX_SIZE 1000

int main(){
    int n,i,arr[MAX_SIZE];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]<0){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}


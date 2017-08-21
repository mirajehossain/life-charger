#include<stdio.h>
int main(){
    int arr[100],n,i,j,count;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    count = 0;
    for(j=0;j<n;j++){
         if(arr[i]){
        count++;
        }
    }
    printf("%d\n",count);

    return 0;
}

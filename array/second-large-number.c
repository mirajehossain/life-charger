#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[100],i,j,n,temp;
    int max1,max2;
    scanf("%d",&n);
    for(i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    max1 = max2 = INT_MIN;
    for(i=0; i<n;i++){
        if(arr[i]>max1){

            max2 = max1;
            max1 = arr[i];
        } else if(arr[i]>max2){
            max2 = arr[i];
        }
    }
    printf(" max 1 = %d ",max1);
    printf(" max 2 = %d ",max2);

    return 0;
}

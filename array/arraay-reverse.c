#include<stdio.h>
int main()
{
    int n,i,j,arr[100],reverseArr[100];
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter element of array : ");

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    ///reverse
    j =0;
    for(i=n-1;i>=0;i--){
        reverseArr[j]= arr[i];
        j++;
    }

    ///print reverse array
    printf("reverse array is : ");
    for(i=0;i<n;i++){
        printf("%d\t",reverseArr[i]);
    }
    return 0;
}

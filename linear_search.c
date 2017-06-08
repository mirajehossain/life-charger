#include<stdio.h>
int main()
{
    int a[100], b,i,key,check,location;
    scanf("%d\n",&b);
    for(i=0;i<b;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&key);
    check = 0;
    for(i=0;i<b;i++){
        if(a[i]==key){
           check=1;
           location = i+1;
        }
    }
        if(check == 1){
            printf("%d",location);
        } else{
            printf("Not found");
        }
    return 0;
}

#include<stdio.h>
int main()
{
    int a[100], b,i,key;
    scanf("%d\n",&b);
    for(i=0;i<b;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&key);
    for(i=0;i<b;i++){
        if(a[i]==key)
           break;
    }
        if(i == b){
            printf("Not found");
        } else{
            printf("%d",i+1); /// what location found my key
        }
    return 0;
}

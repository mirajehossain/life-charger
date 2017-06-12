#include<stdio.h>
int main()
{
    int a,b,temp;
    scanf("%d%d",&a,&b);

    if(a<b){
        temp = b-a;
        printf("O JOGO DUROU %d HORA(S)\n",temp);
    } else if(a>b){
        temp = 24-a;
        temp = temp + b;
        printf("O JOGO DUROU %d HORA(S)\n",temp);
    } else if(a==b){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    return 0;
}


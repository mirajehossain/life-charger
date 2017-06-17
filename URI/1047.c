#include<stdio.h>
int main(){

    int x1,x2,y1,y2,temp,output,min,hour;
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    if(x1 < y1){
        temp = y1 - x1;
        printf("O JOGO DUROU %d HORA(S) E ",temp);
    } else if(x1 > y1 ){
        temp = 24 - x1;
        output = temp+y1;
        printf("O JOGO DUROU %d HORA(S) E ",output);
    }

    if(x2< y2){
        temp = y2-x2;
        printf("%d MINUTO(S)\n",temp);
    } else if(x2>y2){
        temp = 60 - x2;
        output = temp + y2;
        printf("%d MINUTO(S)\n",output);
    }

    if((x1 == y1 && x2 == y2)){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    return 0;
}

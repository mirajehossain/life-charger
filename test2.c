#include<stdio.h>
int main()
{
    int ini_h,ini_m,fin_h,fin_m;
    int temp,hour,minute;
    scanf("%d%d",&ini_h,&ini_m);
    scanf("%d%d",&fin_h,&fin_m);

    if(ini_h == fin_h && ini_m == fin_m){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    } else {

        if(ini_h > fin_h){
            temp = 24 - ini_h;
            hour = temp + fin_h;

            if(ini_m == fin_m){
                printf("0 MINUTO(S)\n");
            } else {
                if(ini_m < fin_m){
                    minute = fin_m - ini_m;
                    printf("%d MINUTO(S)\n",minute);
                } else{
                    temp = 60 - ini_m;
                    minute = temp + fin_m;
                    printf("%d MINUTO(S)\n",minute);
                }
            }

        } else {
            hour = fin_h - ini_h;
           if(hour<2){
                printf("O JOGO DUROU 0 HORA(S) E ");
            } else {
                printf("O JOGO DUROU %d HORA(S) E ",hour);
            }
            if(ini_m < fin_m){
                minute = fin_m - ini_m;
                printf("%d MINUTO(S)\n",minute);
            } else {
                temp = 60 - ini_m;
                minute = temp + fin_m;
                printf("%d MINUTO(S)\n",minute);
            }
        }
    }

    return 0;
}

#include<stdio.h>
int main()
{
    double n;
    int money,temp,i=0;
    int notes [12] =  {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
    float amount[12] =  {100, 50, 20, 10, 5, 2, 1, .5, .25, .1, .05, .01};

    scanf("%lf",&n);
    money = n*100;
    printf("NOTAS:\n");
    while(i<6){
        temp = money / notes[i];
        money = money - temp*notes[i];
        printf("%d nota(s) de R$ %.2f\n",temp,amount[i]);
        i++;
    }

    printf ( "MOEDAS:\n" );
    while(i<12){
        temp = money / notes[i];
        money = money - temp*notes[i];
        printf ("%d moeda(s) de R$ %.2lf\n", temp, amount[i] );
        i++;
    }
return 0;
}

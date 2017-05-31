#include<stdio.h>
int main()
{
    double amount,A,B;
    int extra, hundard ,fifty, twenty, ten, five, two, coinOne, coin50, coin25, coin10, coin05, coin01;
    scanf("%.2lf",&amount);
    amount = amount*100;

    hundard = amount/10000;
    extra = (int)amount % 10000;

    fifty = extra/5000;
    extra = extra%5000;

    twenty = extra/2000;
    extra = extra%2000;

    ten = extra/1000;
    extra = extra%1000;

    five = extra/500;
    extra = extra%500;

    two = extra/200;
    extra = extra%200;

    coinOne = extra/100;
    extra = extra%100;

    coin50 = extra/50;
    extra = extra%50;

    coin25 = extra/25;
    extra = extra%25;

    coin10 = extra/10;
    extra = extra%10;

    coin05 = extra/5;
    extra = extra%5;

    coin01 = extra/1;
    extra = extra%1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",hundard);
    printf("%d nota(s) de R$ 50.00\n",fifty);
    printf("%d nota(s) de R$ 20.00\n",twenty);
    printf("%d nota(s) de R$ 10.00\n",ten);
    printf("%d nota(s) de R$ 5.00\n",five);
    printf("%d nota(s) de R$ 2.00\n",two);
     printf("MOEDAS:\n");
     printf("%d moeda(s) de R$ 1.00\n",coinOne);
     printf("%d moeda(s) de R$ 0.50\n",coin50);
     printf("%d moeda(s) de R$ 0.25\n",coin25);
     printf("%d moeda(s) de R$ 0.10\n",coin10);
     printf("%d moeda(s) de R$ 0.05\n",coin05);
     printf("%d moeda(s) de R$ 0.01\n",coin01);

 return 0;
}

#include<stdio.h>
int main(){
    double amount;
    double extra;
    int hundard ,fifty, twenty, ten, five, two, coinOne, coin50, coin25, coin10, coin05, coin01;
    scanf("%lf",&amount);
    extra = amount*100;

    hundard = extra / 10000;
    extra = (int)extra % 10000;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",hundard);

    fifty = extra / 5000;
    extra = (int)extra % 5000;
    printf("%d nota(s) de R$ 50.00\n",fifty);

    twenty = extra / 2000;
    extra = (int)extra % 2000;
    printf("%d nota(s) de R$ 20.00\n",twenty);

    ten = extra / 1000;
    extra = (int)extra % 1000;
    printf("%d nota(s) de R$ 10.00\n",ten);

    five = extra / 500;
    extra = (int)extra % 500;
    printf("%d nota(s) de R$ 5.00\n",five);

    two = extra / 200;
    extra = (int)extra % 200;
    printf("%d nota(s) de R$ 2.00\n",two);


    printf("MOEDAS:\n");

    coinOne = extra / 100;
    extra =(int) extra % 100;
    printf("%d moeda(s) de R$ 1.00\n",coinOne);

    coin50 = extra / 50;
    extra =(int) extra % 50;
    printf("%d moeda(s) de R$ 0.50\n",coin50);

    coin25 = extra / 25;
    extra = (int)extra % 25;
    printf("%d moeda(s) de R$ 0.25\n",coin25);

    coin10 = extra / 10;
    extra = (int)extra % 10;
    printf("%d moeda(s) de R$ 0.10\n",coin10);

    coin05 = extra / 5;
    extra = (int)extra % 5;
    printf("%d moeda(s) de R$ 0.05\n",coin05);

    coin01 = extra / 1;
    printf("%d moeda(s) de R$ 0.01\n",coin01);

return 0;
}

#include<stdio.h>
int main()
{
    long amount,extra,hundard ,fifty ,twenty ,ten ,five,two ,one;
    scanf("%li",&amount);
    hundard = amount/100;
    extra = amount%100;

    fifty = extra/50;
    extra = extra%50;

    twenty = extra/20;
    extra = extra%20;

    ten = extra/10;
    extra = extra%10;

    five = extra/5;
    extra = extra%5;

    two = extra/2;
    extra = extra%2;

    one = extra/1;
    extra = extra%1;

    printf("%li\n",amount);
    printf("%li nota(s) de R$ 100,00\n",hundard);
    printf("%li nota(s) de R$ 50,00\n",fifty);
    printf("%li nota(s) de R$ 20,00\n",twenty);
    printf("%li nota(s) de R$ 10,00\n",ten);
    printf("%li nota(s) de R$ 5,00\n",five);
    printf("%li nota(s) de R$ 2,00\n",two);
    printf("%li nota(s) de R$ 1,00\n",one);

  return 0;
}

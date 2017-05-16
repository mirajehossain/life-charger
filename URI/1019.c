#include<stdio.h>
int main()
{
    int second,minute,hour,extra;
    scanf("%d",&second);

   hour = second/3600;
   extra = second%3600;

    minute = extra/60;
    second = extra%60;

    printf("%d:%d:%d\n",hour,minute,second);
  return 0;
}


#include<stdio.h>
int main()
{
    int X,Y,xyrAgoMinasAge,result;

    float xyrAgoRajusAge;
    scanf("%d%d",&X,&Y);
    xyrAgoMinasAge = Y - X;
    xyrAgoRajusAge = xyrAgoMinasAge/2;
    result = xyrAgoRajusAge+X;
    printf("%d\n",result);


    return 0;
}

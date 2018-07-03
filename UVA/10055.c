#include<stdio.h>

int main()
{

    long long a,b,temp,result=0;

    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
	result = 0;
        if(a<b)
        {
            temp = a;
            a = b;
            b = temp;

            result = a - b;
           printf("%lld\n",result);
        }
        else
        {
            result = a - b;
            printf("%lld\n",result);
        }
    }

    return 0;
}


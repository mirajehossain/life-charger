#include<stdio.h>
int main()
{
    int arr[6][6];
    int i,j,k,count,sum=0,msum=-9999;
    for( i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(k=0; k<4; k++)
    {
        for(i=0; i<4; i++)
        {
            count = 0;
            sum = 0;
            for(j=k; count<3; j++)
            {
                if(count==0)
                {
                    sum+= arr[i+1][j+1];
                }
                sum+=arr[i][j];
                sum+=arr[i+2][j];
                count++;

            }
            if(msum<sum)
            {
                msum = sum;
            }
        }
    }
     printf("%d\n",msum);

    return 0;
}

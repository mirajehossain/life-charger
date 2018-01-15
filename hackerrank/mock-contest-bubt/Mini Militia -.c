#include <stdio.h>

int main()
{
    /* 2D array declaration*/
    int disp[20][20];
    /*Counter variables for the loop*/
    int i, j, n, k, T;
    scanf("%d",&T);
    for(k=1; k<=T; k++)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf("%d", &disp[i][j]);
            }
        }
        printf("\n");

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%d ", disp[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

#include<stdio.h>
int main()
{
    //float cgpa[5];
    int array2d[5][5],i,j;
  /*     {
         {60,66,78,46,66},
         {45,36,96,44,45},
         {65,76,78,76,64},
         {58,52,98,46,66},
         {85,56,78,65,86}
    };
*/



    for( i=0;i<5;i++){
        for( j=0;j<5;j++){
            scanf("%d",&array2d[i][j]);
        }
    }
    printf("%d",array2d[1][2]);

    return 0;
}

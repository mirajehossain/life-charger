#include<stdio.h>
int main()
{
    int amount;
    int *amount_ptr;
    amount_ptr = &amount;
    *amount_ptr = 55;
    printf("%d\n",amount);

    int arr[] = {10,52,63};
    int *arr_ptr = arr;
   // printf("first element : %i\n",*(arr_ptr++));
   // printf("second element : %i\n",*(arr_ptr++));
    //printf("third element : %i\n",*(arr_ptr++));
    ///printf("third element : %i\n",*arr_ptr);
    arr_ptr = &arr[1];
    printf("%i",arr_ptr[1]);
    return 0;
}

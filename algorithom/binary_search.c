#include<stdio.h>
int main(){
    int arr[10] = {6,8,9,10,20,30,35,39,45,80};
    int i, j, key= 12,start, end, mid,n=0;
    start = 0;
    end = 10;
    mid =(int)((start + end))/2;

    while(start<=end){
        if(key == arr[mid]){
            printf("found");
            n++;
            break;
        }else if(key<arr[mid]){
            end = mid - 1;
            mid = (int)((start + end)/2);
        } else if(key>arr[mid]){
            start = mid + 1;
            mid = (int)((start + end)/2);
        }
    }
    if(n==0){
        printf("not found");
    }
    return 0;
}

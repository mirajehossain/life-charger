#include<iostream>
using namespace std;

BUBBLE(int *arr, int n){
    int temp, ptr,i;
    for(i=1; i<n-1; i++){
        ptr = 0;
        while(ptr <= n-i){
            if( *(arr+ptr) > *(arr+ptr+1)){
                temp = *(arr+ptr);
                *(arr+ptr) = *(arr+ptr+1);
                 *(arr+ptr+1) = temp;
            }
            ptr++;
        }

    }
}

int main(){
    int n;
    cin>>n;
    int arr[n], i;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

   for(i=0; i<n; i++){
     BUBBLE(arr,n);
   }

    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

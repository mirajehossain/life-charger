#include<iostream>
#include<math.h>
using namespace std;

void CROSSOUT(int *arr, int n, int k)
{
    int i;
    if(arr[k] == 1){
        return;
    }
    for(i= 2*k; i<= n; i= i+k){
        *(arr + i) = 1;
    }

}
int main()
{
    int n;
    cin>>n;
    int arr[n], i;
    for(i=0; i<n; i++)
    {
        arr[i]= i;
    }
    for(i=2; i<sqrt(n); i++){
        CROSSOUT(arr,n,i);
    }

    for(i=2; i<n; i++){
        if(arr[i] != 1){
            cout<<arr[i]<<" ";
        }
    }
}

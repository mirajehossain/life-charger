#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n], i,lb, up, mid, item, beg, end;
    for(i=0; i<n; i++)
        cin>>arr[i];
    cin>>item;

    beg = lb = 1;
    end = up = n;
    mid = int((beg+end)/2);
    while(beg <= end && arr[mid] != item){
        if(item < arr[mid]){
            end = mid-1;
        } else {
            beg = mid+1;
        }
       mid = int((beg+end)/2);
    }


    if(arr[mid] == item){
        cout<< "Found";
    } else {
        cout<< "Not found";
    }

}

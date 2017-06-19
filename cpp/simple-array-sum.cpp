#include<iostream>
using namespace std;

int  main(){
    int n,i,arr[1000],sum=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        sum+= arr[i];
    }
    cout<< sum << endl;

return 0;
}

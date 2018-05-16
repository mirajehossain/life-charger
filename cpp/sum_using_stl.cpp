
#include<iostream>
#include<iterator>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    int n =  10, sum = 0,i;
    for(i = 0; i< n; i++){
        int val;
        cin>>val;
        v.push_back(val);
    }

    vector <int>:: iterator ii=v.begin();
    for(ii = v.begin(); ii<v.end();ii++){
        sum += *ii;
    }
    cout<<"sum is: "<<sum<<endl;
    return 0;
}


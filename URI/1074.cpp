#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin>> t;
    for(int i=0; i<t; i++){
        cin>>n;
        if(n==0)
            cout<< "NULL"<<endl;
        else if (n>0 && n%2==0)
            cout << "EVEN POSITIVE"<<endl;
        else if(n>0 && n%2== 1)
            cout << "ODD POSITIVE"<<endl;
        else if (n<0 && n%2==0)
            cout << "EVEN NEGATIVE"<<endl;
        else
            cout<< "ODD NEGATIVE"<<endl;
    }

return 0;
}

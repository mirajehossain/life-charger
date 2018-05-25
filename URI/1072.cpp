#include <iostream>
 
using namespace std;
 
int main() {
   int n;
   cin>>n;
   if(n>5 && n%2==0){
       n = n+1;
   }
   int x = n+12;
   
   for(int i=n;i<x;i+=2){
       cout<<i<<endl;
   }
    return 0;
}

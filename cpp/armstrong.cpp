
#include<iostream>
#include<math.h>
using namespace std;

int main(){
int n;
cin>> n;
int sum = 0;
int div = n / 10;
int res = n%10;
while(res!=0){
    sum = sum +  (res*res*res);
    res = div %10;
    div = div/10;
}
if(sum == n){
    cout<<"armstrong ";
 }else{

 cout<<"Not armstrong";
 }

return 0;
}

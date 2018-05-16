
#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
class sum{
    public: int a,b;

    sum operator +(const sum& s){
    sum ss;
    ss.a = this->a + s.a;
    ss.b = this->b + s.b;
    return ss;
    }
};

int main(){
    sum s1,s2,s3;

    s1.a = 10;
    s1.b = 20;
    s2.a = 10;
    s2.b = 20;

    s3 = s1+s2;
    cout<<s3.a+ s3.b<<endl;
return 0;
}

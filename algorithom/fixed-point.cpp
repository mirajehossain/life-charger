#include<bits/stdc++.h>

using namespace std;
#define MAX 10000000
double f(double x)
{
    return x*x*x*x-3*x*x-3;
}
double g(double x)
{
    return pow(3*x*x+3,.25);
}

int main()
{
    double p, p0, Tol;
    int i=1;
    int No;

    cout<<"Enter approximate p: ";
    cin>>p0;

    while (i<=MAX)
    {
        p = g(p0);

        if((fabs(p-p0))<0.001)
        {
            break;
        }
       /// cout<<"Iteration Current value = "<< p<<endl;

        i++;
        p0=p;

        if (i>MAX)
    {
        cout<<"Method Failed after "<< MAX<<" Iteration";
    }

}

 cout<<"Iteration Current value = "<< p<<endl;
}

#include <bits/stdc++.h>
using namespace std;
float f(float x)
{
    return x*x - 4*x -10;
}

void secant(float x1, float x2)
{
    float x0,c;



    while (fabs(x2 - x1) >= 0.001){
        x0 = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));

        c = f(x1) * f(x0);

        x1 = x2;
        x2 = x0;

        if (c == 0)
            break;
    }

    cout << "Root of the given equation = " << x0 << endl;

}

int main()
{

    float x1 = 4, x2 = 2;
    secant(x1, x2);
    return 0;
}

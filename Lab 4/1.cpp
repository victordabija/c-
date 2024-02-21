#include <iostream>
#include <cmath>
#include <iomanip>

typedef long double ld;

using namespace std;

ld f(ld x)
{
    return (x * x * x * x) + 2 * (x * x * x) - x - 1;
}

int main() 
{
    int i, n;
    ld a,b,c;

    a = 0;
    b = 1;
    n = 16;

    for (int i = 1; i <= n; i++)
    {
        c = (b+a)/2;

        cout << "i = " << i << ", x = " << c << ", f(x) = " << fixed << setprecision(8) << f(c) << endl;
        if (f(c) == 0) 
        {
            break;
        } else if (f(c) * f(a) > 0) {
            a = c;
        } else {
            b = c;
        }
    }
    
    return 0;
}
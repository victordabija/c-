#include <iostream>
#include <iomanip>
#include <cmath>

typedef long double ld;

using namespace std;

ld msup, minf, a, b, e, x, xnou, xvechi, eps;

ld f(ld x) {
    return pow(x, 4) - 3 * pow(x, 2) + 7.5 * x - 1; 
}

int main() {
    a = 1.2;
    b = 2;
    eps = 0.01;

    msup = 10;
    minf = 5;

    x = a - (f(a)) / (f(b) - f(a)) * (b-a);
    if (f(x) * f(a) > 0)
    {
            e = b;
            xnou = a;
    } else {
        e = a;
        xnou = b;
    }
    
    do
    {
        xvechi = xnou;
        xnou = xvechi-(f(xvechi)) / (f(e) - f(xvechi)) * (e - xvechi);
        cout << " x=" << setw(10) << fixed << setprecision(8) << xnou;
        cout << " f(x)=" << setw(12) << fixed << setprecision(8) << f(xnou) << endl;


    } while (abs((msup - minf) / minf * (xnou-xvechi)) > eps);

}
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

typedef long double ld;

ld a, b, c, e, x;
int n, i;

ld f(ld x) {
    return log(x*sin(x));
}

int main() {
    a = 0.5;
    b = 1.5;
    n = 10;

    c = a - (f(a)) / (f(b) - f(a)) * (b-a);

    if (f(c) * f(a) > 0)
    {
        e = b;
        x = a;
    } else {
        e = a;
        x = b;
    }

    for (int i = 1; i < n; i++)
    {
        x = x - (f(x)) / (f(e) - f(x)) * (e-x);
        cout << fixed << setprecision(8);
        cout << setw(10) << x << " " << setw(12) << f(x) << endl;
    }
    
    
}

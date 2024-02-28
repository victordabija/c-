#include <iostream> 
#include <iomanip>
#include <cmath>

using namespace std;

typedef long double ld;

ld a, b, xn, xv, M2, m1, e, c;

ld f(ld z) {
    return cos(z) * cos(z) - z/4;
}

ld fd1(ld z) {
    return (-1) * (sin(2 * z) - 0.25);
} 

int main() {
    a = 2.4;
    b = 3;
    M2 = 2;
    m1 = 0.03;
    e = 0.0001;

    c = a - (f(a)) / (f(b) - f(a)) * (b - a);

    if (f(c) * f(a) < 0)
    {
        xn = a;
        xv = b;
    } else {
        xn = b;
        xv = a;
    }

    while (M2 * pow((xn - xv), 2) / (2 * m1) > e)
    {
        xv = xn;
        xn = xv - f(xv) / fd1(xv);
        cout << " x=" << setw(15) << setprecision(15) << fixed << xn << " f=" << setw(15) << setprecision(15) << fixed << f(xn) << endl;
    }

    return 0;
}

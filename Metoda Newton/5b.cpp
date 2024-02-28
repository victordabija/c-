#include <iostream> 
#include <iomanip>
#include <cmath>

using namespace std;

typedef long double ld;

ld a, b, xn, xv, M2, m1, e, c;

ld f(ld z) {
    return pow(z, 5) * (4 * z) + 9;
}

ld fd1(ld z) {
    return 5 * pow(z, 4) - 4;
} 

int main() {
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "M2: "; cin >> M2;
    cout << "M1: "; cin >> m1;
    cout << "E: "; cin >> e;

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
        cout << " x=" << setw(20) << setprecision(15) << fixed << xn << endl << " f=" << setw(15) << setprecision(20) << fixed << f(xn) << endl;
    }

    return 0;
}

#include <iostream> 
#include <iomanip>
#include <cmath>

using namespace std;

typedef long double ld;

ld a, b, x, c;
int i, n;

ld f(ld z) {
    return (2-pow(x, 2)) * cos(x) + 2 * x * sin (x);
}

ld fd1(ld z) {
    return (2 - pow(x, 2)) * (-1 * sin(x)) + 2 * sin(x);
}

int main() {
    i = 0;

    cout << "n: "; cin >> n;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;

    c = a - (f(a)) / (f(b) - f(a)) * (b-a);

    if (f(c) * f(a) < 0) 
    {
        x = a;      
    } else {
        x = b;
    }
    
    while (i < n)
    {
        i++;
        x = x - f(x) / fd1(x);
        cout << "i=" << setw(2) << i << " x=" << setw(20) << setprecision(15) << fixed << x << " f=" << setw(20) << setprecision(15) << fixed << f(x) << endl;
    }
}
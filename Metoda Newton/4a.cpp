#include <iostream> 
#include <iomanip>
#include <cmath>

using namespace std;

typedef long double ld;

ld a, b, x, c;
int i, n;

ld f(ld z) {
    return (4 * pow(x, 4)) + (8 - pow(x, 3)) + (3 - pow(x, 2)) - (7 * x) + 3;
}

ld fd1(ld z) {
    return (16 * pow(x, 3)) - (24 * pow(x, 2)) - (6 * x) - 7; 
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
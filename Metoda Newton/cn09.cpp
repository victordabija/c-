#include <iostream> 
#include <iomanip>

using namespace std;

typedef long double ld;

ld a, b, x, c;
int i, n;

ld f(ld z) {
    return z*z*z - 2 * x * x + z - 3;
}

ld fd1(ld z) {
    return 3 * z * z - 4 * z + 1;
}

int main () {
    a = 2.1;
    b = 15;
    n = 10;
    i = 0;

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
            cout << "i=" << setw(2) << i << " x=" << setw(15) << setprecision(15) << fixed << x << " f=" << setw(15) << setprecision(15) << fixed << f(x) << endl;
    }
    

    return 0;
}

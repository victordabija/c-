#include <iostream>

using namespace std;
using ll = long long;

ll fibonacci(int n) 
{
    if (n <= 1) {
        return n;
    }

    ll previous = 0;
    ll current = 1;
    ll next;

    for (int i = 2; i <= n; i++) {
        next = previous + current;
        previous = current;
        current = next;
    }

    return current;
}

int main ()
{
    int n;
    cout << "Introduceti n: "; cin >> n;
    cout << fibonacci(n) << endl;

    return EXIT_SUCCESS;
}
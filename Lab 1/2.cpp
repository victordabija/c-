#include <iostream>
#include <cmath>

using namespace std;

float a;
float s;
float q;
int n;

int main () 
{
    cin >> a >> q >> n;
    s = a * (exp(n * log(q)) - 1) / (q - 1);

    cout.precision(6);
    cout << fixed << "S = " << s << endl; 

    return EXIT_SUCCESS;
}
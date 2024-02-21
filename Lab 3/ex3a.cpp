#include <iostream>
#include <string>
#include "graph.h"

using namespace std;

int main() {
    string expression = "cos(3.14159/2)";

    for (double x = -10; x <= 10; x+=0.000001)
    {
        if (((x*x*x*x*x) - 5 * x + 7) == 0)
        {
            cout << x << endl;
        }
        
    }
    
    drawGraph(expression);

    return EXIT_SUCCESS;
}
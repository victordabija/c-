#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>

using namespace std;

void drawGraph(const string& expression) {
    FILE *gnuplotPipe = popen("gnuplot -persistent", "w");
    
    if (!gnuplotPipe) {
        cout << "Error opening Gnuplot pipe." << endl;
        return;
    }
    
    fprintf(gnuplotPipe, "plot %s\n", expression.c_str());
    fflush(gnuplotPipe);
    
    pclose(gnuplotPipe);
}
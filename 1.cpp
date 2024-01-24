#include <iostream>
using namespace std;

/*
    ex 1 / 9
    ex 2 / 11
    ex 4,5,6 / 12
*/
int volumInitial;
int volumBazin;
int capacitatePompa;
int capacitateScurgere;
float timp;

int main() 
{
    cout << "Introduceti volumul bazinului: "; cin >> volumBazin;
    cout << "Introduceti volumul initial din bazin: "; cin >> volumInitial;
    cout << "Introduceti capacitatea popmpei: "; cin >> capacitatePompa;
    cout << "Introduceti capacitatea de scurgere: "; cin >> capacitateScurgere;

    timp = (volumBazin - volumInitial) / (capacitatePompa - capacitateScurgere);

    cout << "Bazinul se va umple in " << timp << " unitati de timp" << endl;

    return EXIT_SUCCESS;
}


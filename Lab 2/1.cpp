#include <iostream>
#include "Error.h"


using namespace std;

int main() {
    double exactValue;
    double aproximateValue;
    double eroareaAbsoluta;
    double eroareaRelativa;

    cout << "Introduceti valoarea exacta: "; cin >> exactValue;
    cout << "Introduceti valoarea aproximata: "; cin >> aproximateValue;

    Error error(exactValue, aproximateValue);

    cout << "Eroarea absoluta - " << error.getAbsoluteError() << endl;
    cout << "Eroarea relativa - " << error.getRelativeErrorPercent() << "%" << endl;

    return EXIT_SUCCESS;
}

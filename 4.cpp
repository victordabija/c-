#include <iostream>
using namespace std;

int ziua(int &distanta) 
{
    return (distanta += 5);
}

int noaptea(int &distanta) 
{
    return (distanta -= 3);
}

int main() 
{
    int distantaParcursa = 0;
    int distantaFinala;
    int zi = 0;
    int noapte = 0;

    cout << "Introduceti inaltimea stalpului: "; cin >> distantaFinala;

    while (distantaParcursa < distantaFinala)
    {
        ziua(distantaParcursa);
        ++zi;

        if (distantaParcursa >= distantaFinala)
        {
            break;
        }

        noaptea(distantaParcursa);
        ++noapte;
    }
    
    cout << "Buburuza va urca " << distantaFinala << " metri in " << zi << " zile, " << noapte << " nopti" << endl; 
}
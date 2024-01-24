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
        noaptea(distantaParcursa);
        ++noapte;

        if (distantaParcursa >= distantaFinala)
        {
            break;
        }


        ziua(distantaParcursa);
        ++zi;
    }
    
    cout << "Buburuza va urca " << distantaFinala << " metri in " << zi << " zile, " << noapte << " nopti" << endl; 
}
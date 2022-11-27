#include <iostream>

using namespace std;

int main()
{
    float c,f;

    cout << "--------------------------------------------------------" << "\n";
    cout << "|  Celcius      Fahrenheit       Keterangan            |" << "\n";
    cout << "--------------------------------------------------------" << "\n";

    for (c = 100; c >= -40; c--)
    {
        f = (c * (1.8)) + 32.0;

        if (c == 100)
        {
            cout << "     " << c << "          " << f << "         " << "Air Mendidih" << "\n";
        }
        else if (c == 40)
        {
            cout << "     " << c << "           " << f << "         " << "Air Mandi Panas" << "\n";
        }
        else if (c == 37)
        {
            cout << "     " << c << "           " << f << "        " << "Temperatur Tubuh" << "\n";
        }
        else if (c == 30)
        {
            cout << "     " << c << "           " << f << "          " << "Cuaca Pantai" << "\n";
        }
        else if (c == 21)
        {
            cout << "     " << c << "           " << f << "        " << "Temperatur Ruangan" << "\n";
        }
        else if (c == 10)
        {
            cout << "     " << c << "           " << f << "          " << "Hari Yang Dingin" << "\n";
        }
        else if (c == 0)
        {
            cout << "     " << c << "            " << f << "          " << "Titik Beku Air" << "\n";
        }
        else if (c == -18)
        {
            cout << "    " << c << "          " << f << "         " << "Cuaca Dingin Bersalju" << "\n";
        }
        else if (c == -40)
        {
            cout << "    " << c << "          " << f << "          " << "Cuaca Sangat Dingin Bersalju" << "\n";
        }
        else
        {
            continue;
        }
    }

    cout << "-----------------------------------------------------------" << endl;



    return 0;
}

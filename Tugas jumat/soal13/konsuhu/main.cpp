#include <iostream>

using namespace std;

double hitungreamur(double celcius) {
    double reamur = celcius * 4 / 5;
    return reamur;
}

double hitungkelvin(double celcius) {
    double kelvin = celcius + 273;
    return kelvin;
}

    double hitungfahrenheit(double celcius) {
    double  fahrenheit = (celcius * 9 / 5) + 32;
    return fahrenheit;
}

void showConvertion (double celcius) {
    double reamur, kelvin, fahrenheit;
    reamur = hitungreamur(celcius);
    kelvin = hitungkelvin(celcius);
    fahrenheit = hitungfahrenheit(celcius);


    cout << celcius << " " << "derajat celcius = " << "\n";
    cout << reamur << " " << "derajat reamur" << "\n";
    cout << kelvin << " " << "derajat kelvin" << "\n";
    cout << fahrenheit << " " << "derajat fahrenheit" << "\n";

}


int main()
{
    double celcius, reamur, kelvin, fahrenheit;
    string lanjut;

    do {
         system("cls");
         cout << "Konversi Suhu :" << "\n";
         cout << "Masukkan Suhu Celcius :";
         cin >> celcius;

         showConvertion(celcius);
         cout << "\n";
         cout << "lanjut < yes / no > ";
         cin >> lanjut;
    } while (lanjut == "yes");
    system ("cls");

    cout << "Program Ended" << "\n";

    return 0;
}

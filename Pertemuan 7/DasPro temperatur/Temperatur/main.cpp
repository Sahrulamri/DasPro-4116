/*
Nama     : SAHRUL AMRI
NIM      : A11.2022.14613
Kelompok : 4116
*/


#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    float temperature;

    cout  << "Masukkan temperatur :" << endl;
    cin >> temperature;
    if (temperature >= 100)
    {
        cout << "gas,karena air menguap pada suhu diatas 100" << endl;
    }else if(temperature <= 0)
    {
        cout << "ice,karena suhu dibawah 1 " << endl;
    }else
    {
        cout << "liquid,karena suhu diantara 1 - 100" << endl;
    }

    return 0;
}

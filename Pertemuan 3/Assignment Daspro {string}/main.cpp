/*
NAMA : SAHRUL AMRI
NIM  : A11.2022.14613
DASAR PEMPROGRAMAN PERTEMUAN 3
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int u = 19;
    float t =173;
    char ub = 'L';
    string ubs = "Large";

    cout << "Umur Saya: " << u;
    cout << endl;
    cout << "Tinggi Badan: " << t;
    cout << endl;
    cout << "Ukuran Baju: " << ub;
    cout << endl;
    cout << "Detail Ukuran: " << ubs;
    cout << endl;

    int a;
    cout << "\nMasukkan Angka: ";
    cin >> a;
    cout << "\nPenjumlahan: " << a + u;
    cout << "\nPengurangan: " << a - u;
    cout << "\nPerkalian: " << a * u;
    return 0;
}

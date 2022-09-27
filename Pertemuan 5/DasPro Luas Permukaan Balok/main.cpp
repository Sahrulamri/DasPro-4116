/*
Nama : Sahrul Amri
NIM  :A11.2022.14613
Assignment DasPro : Menghitung Luas Permukaan Balok
*/
#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
   int panjang, lebar, tinggi, luas_permukaan_balok;

   cout << "Masukkan Panjang : ";
   cin >> panjang;
   cout << "Masukkan Lebar : ";
   cin >> lebar;
   cout << "Masukkan Tinggi : ";
   cin >> tinggi;
   luas_permukaan_balok = 2 * ((panjang * lebar) + (lebar * tinggi) + (panjang * tinggi));
   cout << "luas_permukaan_balok adalah : " << luas_permukaan_balok;

   return 0;
}

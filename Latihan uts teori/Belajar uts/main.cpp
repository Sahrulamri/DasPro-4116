#include <iostream>

using namespace std;

int main()
{
    // Nomor 2
   int x;
   cout << "Masukkan Angka Anda :" << endl;
   cin >> x;
   if (x%2==1 && x >= 1) {
        cout << "Bilangan Anda Ganjil" << endl;
   } else if (0) {
        cout << "Bilangan Anda Genap" << endl;
   } else if (x%2 ==0 && x >= 1) {
        cout << "Bilangan Anda Genap" << endl;
   } else {
        cout << "Input Anda Tidak valid" << endl;
   }

   // Nomor 3
   for (int x=20;x<=35;x++) {
    if (x % 2== 1) {
        cout << x << endl;
        }
   }

    return 0;
}

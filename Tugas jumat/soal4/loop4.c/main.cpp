/*
Nama     :Sahrul Amri
NIM      :A11.2022.14613
Kelompok :4116
*/
#include <iostream>

using namespace std;

int main()
{
   for (int x = 1; x <= 20; x++) {
        cout << x << "\n";
    }
   // cout << "\n";
    int hasil= 1;
    for (int i = 1; i <= 20; i++) {
        hasil+= i;
    }
        cout << "jumlah = " << hasil << "\n";
        cout << "rata-rata = " << hasil/20 << "\n";
    return 0;
}

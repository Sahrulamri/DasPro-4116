/*
Nama     :Sahrul Amri
NIM      :A11.2022.14613
Kelompok :4116
*/
#include <iostream>

using namespace std;

int main()
{
    while (true) {
        int x;
        cout << "Program ini akan berhenti jika Anda menginputkan angka -99" << "\n";
        cout << "Masukkan Nilai Anda :" << " ";
        cin >> x;
            if (x == -99) {
                cout << "\n";
                cout << "Keluar karena break" << "\n";
                break;
            }
    }
    return 0;
}

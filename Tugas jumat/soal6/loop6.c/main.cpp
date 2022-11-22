/*
Nama    : Sahrul Amri
NIM     : A11.2022.14613
Kelompok: 4116
*/


#include <iostream>

using namespace std;

int main()
{
     /* while (true) {
        int x;
        int max;
        int min;
        cout << "Program ini akan berhenti jika Anda menginputkan angka -99" << "\n";
        cout << "Masukkan Nilai Anda :" << " ";
        cin >> x;
            if (x == -99) {
                cout << "\n";
                cout << "Keluar karena break" << "\n";
                if (x > 0) {
                    max=x;
                    min=x;
                } else if (max < x) {
                    max = x;
                } else if (min > x) {
                    min = x;
                } else {

                }
                cout << "Max = " << max << "\n";
                cout << "Min = " << min << "\n";
                break;
            }
    }
    */

    int x;
    int max = INT32_MIN;
    int min = INT32_MAX;
    bool exit = false;
    while (exit == false) {
        cin >> x;
        if (max<x && x!=-99) {
            max = x;
        }

        if (min>x && x!=-99) {
            min = x;
        }


        if (x==-99) {
            exit = true;
        }
        if (exit) {
            break;
        }
    }
    cout << "max = " << max << endl;
    cout << "min = " << min << endl;
    return 0;
}

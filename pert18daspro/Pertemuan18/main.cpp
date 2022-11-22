/*
Nama     : Sahrul Amri
NIM      : A11.2022.14613
Kelompok : 4116
*/
#include <iostream>

using namespace std;

int main()
{
   /* for (int i = 0; i < 4; i++) { // initialitation ; condition ; counter ;
        if (i == 2) {
            continue;
        }
        if (i > 3) {
            break;
        }
        cout << i << endl;
    }
    /*
    i = 0, 0
    i = 1, 1
    i = 2,
    i = 3, 3
    */
    /*
    for (int i = 0; i <=1 ; i++) {
        for(int j = 0; j <= 1; j++) {
            cout << i << endl;
        }
    }*/
    /*
    0011
    i=0, j=0; 0
         j=1; 0
         */
         /*for (int i = 0; i <=1 ; i++) {
            cout << i << endl;
        for(int j = 0; j <= 1; j++) {
            cout << j << endl;
        }
    }
    */


    while (true) {


    cout << " == Daftar Menu Makanan == " << endl;
    cout << "1. Nasi Kerikil" << endl;
    cout << "2. Rica-Rica Bekicot" << endl;
    cout << "3. Pepes Brotowali" << endl;

    int x;
    cout << "Input kode Makanan :" << endl;
    cin >> x;

    switch(x) {
    case 1:
        cout << "Nasi Kerikil" << endl;
        break;
    case 2:
        cout << "Rica- Rica Bekicot" << endl;
        break;
    case 3:
        cout << "Pepes Brotowali" << endl;
        break;
    case 4:
        cout << "Kepiting presto" << endl;
        break;
    default:
        cout << "Maaf,kode makanan tidak ditemukan." << endl;
    }
    }

    return 0;
}

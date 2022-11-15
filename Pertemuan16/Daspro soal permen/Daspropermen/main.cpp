/*
Nama     : Sahrul Amri
NIM      : A11.2022.14613
Kelompok : 4116
*/
#include <iostream>

using namespace std;

int main()
{
    int money;
    int price;
    int quantity;
    int kembalian;
    cout << "Masukkan sejumlah uang Anda:" << endl;
    cin >> money;
    cout << "Harga permen yang ingin dibeli oleh Ardian" << endl;
    cin >> price;
        if (price == 1000 ) {
            quantity = 3;
            kembalian = money - price * quantity;
                cout << "selamat Ardi Kamu mendapat " << quantity <<  " " << "buah permen" << endl;
                cout << "Kembali " << kembalian <<" " << "ribu ya, " << "donasinya kakak" << endl;
        } else if (price == 500 ) {
            quantity = money / price;
            kembalian = money - price * quantity;
                cout << "selamat Ardi Kamu mendapat " << quantity <<  " " << "buah permen" << endl;
                cout <<  "kembalianmu" << " " << kembalian << " " << "rupiah" << " " << "uangnya pas ya" << endl;
        } else if (price == 300) {
            for (int x = 300 ; x <= money; x=x+300) {
                cout << x << " ";
            } quantity = money / price;
              kembalian = money - price * quantity;
                  cout  << endl;
                  cout << "selamat Ardi Kamu mendapat " << quantity <<  " " << "buah permen" << endl;
                  cout <<  "kembalianmu" << " " << kembalian << " " << "rupiah ya," << " " << "donasinya kakak, jangan lupa beli lagi ya!" << endl;
        }  else {
            quantity = money / price;
            kembalian = money % price;
                cout << "Ardi mendapat " << quantity << " " << "permen" << endl;
                cout << "uang anda kembali" << " " << kembalian << " " << "rupiah ya, donasinya kakak." << endl;
        }
    return 0;
}

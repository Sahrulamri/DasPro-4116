#include <iostream>

using namespace std;

int main()
{
    int x;
    int sum = x;
    cout << "Masukkan bilangan:" << "\n";
    cin>> x;
    while ( x != 9999) {
        cout << x << "\n";
     sum = sum + x;

    cout << "Masukkan Bilangan: ";
    cin >>x;
    }
    cout << "jumlah angka:" << sum;
    return 0;
}

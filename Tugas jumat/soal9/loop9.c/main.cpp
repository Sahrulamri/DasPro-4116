#include <iostream>

using namespace std;

int main()
{
    int x;
    int sum = 0;
    int i = 1;
    cout << "Masukkan Bilangan :" << "\n";
    cin >> x;
    while (x != 9999) {
        cout << "Masukkan Bilangan :" << "\n";
        cin >> x;
        sum+= x;
        i+= 1;
        cout << "Masukkan Bilangan :" << "\n";
        cin >> x;
    }
    cout << "Jumlah :" << sum;
    cout << "\n";
    cout << "Banyaknya Bilangan :" << i-1;
    return 0;
}

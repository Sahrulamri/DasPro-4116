#include <iostream>

using namespace std;

int main()
{
    int x;
    int i = 0;
    cout << "Masukkan Bilangan :" << "\n";
    cin >> x;
    while (x != 9999) {
        cout << x << "\n";
        i = i + 1;
        cout << "Masukkan Bilangan :" << "\n";
        cin >> x;
    }
    cout << "jumlah Bilangan :" << i;

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    //f_n= f_n1 + f_n2

    int n;
    int f_bilangan1;
    int f_bilangan2;
    int f_bilangan;
    cout << "Maasukka Program Deret Fibonacci" << endl;
    cout << "Masukkan nilai ke-n :" << endl;
    cin >> n;
    f_bilangan1 = 1;
    f_bilangan2 = 0;
    f_bilangan = f_bilangan1 + f_bilangan2;
    cout << f_bilangan2 << " ";
    cout << f_bilangan1 << " ";
    for (int i = 1; i < n; i++) {
        f_bilangan = f_bilangan1 + f_bilangan2;
        f_bilangan2 = f_bilangan1;
        f_bilangan1 = f_bilangan;

        cout << f_bilangan << " ";
    }
    cout << "\n";
    return 0;
}

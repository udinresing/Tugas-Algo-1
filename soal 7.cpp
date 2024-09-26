#include <iostream>
using namespace std;

int main() {
     int a, b, c;

    cout << "Masukkan tahun: ";
    cin >> a;

    cout << "Masukkan bulan: ";
    cin >> b;

    cout << "Masukkan hari: ";
    cin >> c;

    cout << "Hasil: " << a*365 + b*12 + c;
    return 0;
}
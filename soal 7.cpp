#include <iostream>
using namespace std;

int main() {
     int a, b, c; // deklarasi variabel interger a, b, c

    cout << "Masukkan tahun: "; // user masukkan tahun
    cin >> a;

    cout << "Masukkan bulan: "; // user masukkan bulan
    cin >> b;

    cout << "Masukkan hari: "; // masukkan hari
    cin >> c;

    cout << "Hasil: " << a*365 + b*12 + c; // perhitungan dan output
    return 0;
}
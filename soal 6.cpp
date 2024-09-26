#include <iostream>
using namespace std;

int main() {
     int bilangan; // deklarasi variabel integer bilangan
    int pembagi; // deklarasi variabel integer pembagi

    cout << "Masukkan bilangan: "; // user masukkan bilangan
    cin >> bilangan;

    cout << "Masukkan pembagi: "; // user masukkan pembagi
    cin >> pembagi;

    int result = bilangan % pembagi; // deklarasi variabel integer result dan rumusnya untuk hasil dari sisa

    cout << "Hasil: " << bilangan / pembagi ; // perhitungan hasil dari pembagian tanpa sisa dan output

    cout << endl;

    cout << "Sisa: " << result; // output hasil dari sisa
    return 0;
}
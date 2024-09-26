#include <iostream>
using namespace std;

int main() {
     int bilangan;
    int pembagi;

    cout << "Masukkan bilangan: ";
    cin >> bilangan;

    cout << "Masukkan pembagi: ";
    cin >> pembagi;

    int result = bilangan % pembagi;

    cout << "Hasil: " << bilangan / pembagi ;

    cout << endl;

    cout << "Sisa: " << result;
    return 0;
}
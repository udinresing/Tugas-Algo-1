#include <iostream>

int main() {
  using namespace std;

  int a;

  cout << "Masukkan jam: ";
  cin >> a;

    if (a<1) {
        cout << "Angka tidak boleh dibawah 1";
        return 1;
    }
        cout << endl;
  cout << " menit = " << a*60 << " Menit ";
  cout << "detik = " << a*3600 << "Detik";
  return 0;
}
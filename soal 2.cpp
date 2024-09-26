#include <iostream>

int main() {
  using namespace std;

  int a, b, c; // deklarasi variabel integer a,b,c

  cout << "Masukkan angka 1: "; // user masukkan angka pertama
  cin >> a;

  cout << endl; // memberi spasi

  cout << "Masukkan angka 2: "; // user masukkan angka kedua
  cin >> b;

  cout << endl; // memberi spasi

  cout << "Masukkan angka 3: "; // user masukkan angka ketiga
  cin >> c;

  cout << endl; // memberi spasi

  cout << "Rata Rata: " << (a + b + c) / 3; // perhitungan rata rata dan hasil akhir

  return 0;
}
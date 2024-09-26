#include <iostream>

int main() {
  using namespace std;

  float a; // deklarasi variabel float a

  cout << "Masukkan temperatur celsius: "; // user masukkan angka celsius
  cin >> a;

  cout << a << " Celcius = " << (a * 1.8) + 32 << " Fahrenheit"; // proses perhitungan dan hasil akhir

  return 0;
}
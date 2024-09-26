#include <iostream>

int main() {
  using namespace std;

  float a; // deklarasi variabel integer a

  cout << "Masukkan radius: "; // user masukkan radius (jari jari)
  cin >> a;

  cout << " Luas = " << 3.14 * (a*a) << " cm "; // proses penghitungan luas dan hasil akhir
    cout << " keliling = " << 3.14 * (a*2) << " cm"; // proses  penghitungan keliling dan hasil akhir
  return 0;
}
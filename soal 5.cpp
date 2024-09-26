#include <iostream>

int main() {
  using namespace std;

  int a; // deklarasi varibel integer a

  cout << "Masukkan jam: "; // user masukkan jam
  cin >> a;

    if (a<1) { // rules bahwa integer a tidak boleh dibawah 1
        cout << "Angka tidak boleh dibawah 1"; // output tulisan 
        return 1;
    }
        cout << endl;
  cout << " menit = " << a*60 << " Menit "; // proses perhitungan dan hasil akhir dengan satuan Menit
  cout << "detik = " << a*3600 << "Detik"; // proses perhitungan dan hasil akhir dengan satuan Detik
  return 0;
}
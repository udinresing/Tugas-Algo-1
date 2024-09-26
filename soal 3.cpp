#include <iostream>

int main() {
  using namespace std;

  float a;

  cout << "Masukkan temperatur celsius: ";
  cin >> a;

  cout << a << " Celcius = " << (a * 1.8) + 32 << " Fahrenheit";

  return 0;
}
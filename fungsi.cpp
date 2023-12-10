#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int fungsi_kuadrat(int x, int y) {
  int hasil = (x * x) + (y * y);
  return hasil;
}

int main() {
  int x, y;

  cout << "Masukkan nilai x: ";
  cin >> x;

  cout << "Masukkan nilai y: ";
  cin >> y;

  cout << "Hasil fungsi kuadrat: " << fungsi_kuadrat(x, y) << endl;

  return 0;
}
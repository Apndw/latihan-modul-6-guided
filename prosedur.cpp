#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

void tampil_nama() {
  cout << "Nama saya adalah John Doe" << endl;
}

void tampil_alamat(string x) {
  cout << "Alamat saya adalah " << x << endl;
}

int main() {
  tampil_nama();
  tampil_alamat("Jalan Kenangan No. 1");

  return 0;
}
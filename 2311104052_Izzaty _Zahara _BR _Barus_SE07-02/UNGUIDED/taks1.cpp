#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;

  // Meminta input ukuran array dari user
  cout << "Masukkan jumlah elemen array: ";
  cin >> n;

  // Deklarasi array dengan ukuran n
  int arr[n];

  // Meminta input elemen array dari user
  cout << "Masukkan elemen array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // Menampilkan data array
  cout << "Data Array : ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // Menampilkan nomor genap
  cout << "Nomor Genap : ";
  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 == 0) {
      cout << arr[i] << ", ";
    }
  }
  cout << endl;

  // Menampilkan nomor ganjil
  cout << "Nomor Ganjil : ";
  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 != 0) {
      cout << arr[i] << ", ";
    }
  }
  cout << endl;

  return 0;
}
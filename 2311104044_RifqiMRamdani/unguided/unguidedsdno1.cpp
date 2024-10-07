#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    // Meminta input jumlah elemen array
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    vector<int> dataArray(n);  // Vektor untuk menyimpan elemen

    // Input elemen-elemen array dari pengguna
    cout << "Masukkan " << n << " elemen array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemen " << (i + 1) << ": ";
        cin >> dataArray[i];
    }

    // Menampilkan Data Array
    cout << "Data Array: ";
    for (int i = 0; i < n; i++) {
        cout << dataArray[i] << " ";
    }
    cout << endl;

    // Menampilkan Nomor Genap
    cout << "Nomor Genap: ";
    for (int i = 0; i < n; i++) {
        if (dataArray[i] % 2 == 0) {
            cout << dataArray[i] << ", ";
        }
    }
    cout << endl;

    // Menampilkan Nomor Ganjil
    cout << "Nomor Ganjil: ";
    for (int i = 0; i < n; i++) {
        if (dataArray[i] % 2 != 0) {
            cout << dataArray[i] << ", ";
        }
    }
    cout << endl;

    return 0;
}

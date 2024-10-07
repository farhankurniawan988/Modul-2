#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> dataArray;   // Untuk menyimpan data array
    vector<int> nomorGenap;  // Untuk menyimpan bilangan genap
    vector<int> nomorGanjil; // Untuk menyimpan bilangan ganjil
    int n;

    // Meminta input jumlah elemen dalam array
    cout << "Masukkan jumlah elemen data array: ";
    cin >> n;

    // Mengisi array dengan angka berurutan mulai dari 0
    for (int i = 0; i < n; i++) {
        dataArray.push_back(i); // Menambahkan angka ke dalam dataArray
        // Memisahkan angka genap dan ganjil
        if (i % 2 == 0) {
            nomorGenap.push_back(i);
        } else {
            nomorGanjil.push_back(i);
        }
    }

    // Menampilkan data array
    cout << "Data Array : ";
    for (int i = 0; i < dataArray.size(); i++) {
        cout << dataArray[i] << " ";
    }
    cout << endl;

    // Menampilkan nomor genap
    cout << "Nomor Genap : ";
    for (int i = 0; i < nomorGenap.size(); i++) {
        cout << nomorGenap[i];
        if (i != nomorGenap.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    // Menampilkan nomor ganjil
    cout << "Nomor Ganjil : ";
    for (int i = 0; i < nomorGanjil.size(); i++) {
        cout << nomorGanjil[i];
        if (i != nomorGanjil.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}

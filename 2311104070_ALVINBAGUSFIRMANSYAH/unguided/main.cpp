#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    // Meminta pengguna untuk memasukkan jumlah elemen array
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    vector<int> dataArray(n);  // Membuat array dinamis

    // Meminta input untuk setiap elemen array
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
    bool isFirst = true;  // Untuk menghindari koma di awal
    for (int i = 0; i < n; i++) {
        if (dataArray[i] % 2 == 0) {
            if (!isFirst) {
                cout << ", ";
            }
            cout << dataArray[i];
            isFirst = false;
        }
    }
    cout << endl;

    // Menampilkan Nomor Ganjil
    cout << "Nomor Ganjil: ";
    isFirst = true;  // Untuk menghindari koma di awal
    for (int i = 0; i < n; i++) {
        if (dataArray[i] % 2 != 0) {  // Perbaikan penggunaan []
            if (!isFirst) {
                cout << ", ";
            }
            cout << dataArray[i];
            isFirst = false;
        }
    }
    cout << endl;

    return 0;
}

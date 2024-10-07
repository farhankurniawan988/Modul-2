#include <iostream>
using namespace std;

int main() {
    int n;
    // Input batasan angka dari user
    cout << "Masukkan Data: ";
    cin >> n;
    // Menampilkan Data Array
    cout << "Data Array : ";
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
    // Menampilkan Nomor Genap
    cout << "Nomor Genap : ";
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    // Menampilkan Nomor Ganjil
    cout << "Nomor Ganjil : ";
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

#include "main.cpp2.h"

main.cpp2::main.cpp2()
{
    //ctor
}

main.cpp2::~main.cpp2()
{
    //dtor
}
#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    // Meminta input ukuran array dari pengguna
    cout << "Masukkan ukuran dimensi pertama (x): ";
    cin >> x;
    cout << "Masukkan ukuran dimensi kedua (y): ";
    cin >> y;
    cout << "Masukkan ukuran dimensi ketiga (z): ";
    cin >> z;

    // Membuat array 3 dimensi secara dinamis
    int ***array_3d = new int**[x];
    for (int i = 0; i < x; i++) {
        array_3d[i] = new int*[y];
        for (int j = 0; j < y; j++) {
            array_3d[i][j] = new int[z];
        }
    }

    // Meminta input nilai untuk setiap elemen array
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "Masukkan nilai untuk elemen [" << i << "][" << j << "][" << k << "]: ";
                cin >> array_3d[i][j][k];
            }
        }
    }

    // Menampilkan array 3D yang diinputkan
    cout << "\nArray 3D yang diinputkan:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "Elemen [" << i << "][" << j << "][" << k << "] = " << array_3d[i][j][k] << endl;
            }
        }
    }

    // Membersihkan memori yang dialokasikan secara dinamis
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            delete[] array_3d[i][j];
        }
        delete[] array_3d[i];
    }
    delete[] array_3d;

    return 0;
}

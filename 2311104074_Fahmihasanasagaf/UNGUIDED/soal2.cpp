#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    // Meminta input ukuran dimensi array
    cout << "Masukkan ukuran dimensi pertama (x): ";
    cin >> x;
    cout << "Masukkan ukuran dimensi kedua (y): ";
    cin >> y;
    cout << "Masukkan ukuran dimensi ketiga (z): ";
    cin >> z;

    // Mendeklarasikan array tiga dimensi
    int array3D[x][y][z];

    // Mengisi array tiga dimensi dengan nilai urut atau input dari user
    cout << "Masukkan nilai untuk setiap elemen array:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "Nilai untuk array[" << i << "][" << j << "][" << k << "] : ";
                cin >> array3D[i][j][k];
            }
        }
    }

    // Menampilkan isi array tiga dimensi
    cout << "\nArray Tiga Dimensi:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "array[" << i << "][" << j << "][" << k << "] = " << array3D[i][j][k] << endl;
            }
        }
    }

    return 0;
}

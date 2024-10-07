#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cout << "Masukkan ukuran dimensi pertama (x): ";
    cin >> x;
    cout << "Masukkan ukuran dimensi kedua (y): ";
    cin >> y;
    cout << "Masukkan ukuran dimensi ketiga (z): ";
    cin >> z;

    int array[x][y][z];
    cout << "Masukkan elemen-elemen array: " << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "Elemen [" << i << "][" << j << "][" << k << "]: ";
                cin >> array[i][j][k];
            }
        }
    }
    cout << "\nArray tiga dimensi yang diinputkan:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "Elemen [" << i << "][" << j << "][" << k << "] = " << array[i][j][k] << endl;
            }
        }
    }
    return 0;
}

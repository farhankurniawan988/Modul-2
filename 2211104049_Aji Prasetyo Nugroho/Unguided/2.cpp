#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    cout << "Masukkan ukuran array (dimensi x): ";
    cin >> x;
    cout << "Masukkan ukuran array (dimensi y): ";
    cin >> y;
    cout << "Masukkan ukuran array (dimensi z): ";
    cin >> z;

    int ***array3D = new int**[x];
    for (int i = 0; i < x; ++i) {
        array3D[i] = new int*[y];
        for (int j = 0; j < y; ++j) {
            array3D[i][j] = new int[z];
        }
    }

    cout << "Masukkan elemen-elemen array 3D:" << endl;
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cout << "array3D[" << i << "][" << j << "][" << k << "] = ";
                cin >> array3D[i][j][k];
            }
        }
    }

    cout << "\nArray 3 Dimensi:" << endl;
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cout << "array3D[" << i << "][" << j << "][" << k << "] = " << array3D[i][j][k] << endl;
            }
        }
    }

    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            delete[] array3D[i][j];
        }
        delete[] array3D[i];
    }
    delete[] array3D;

    return 0;
}

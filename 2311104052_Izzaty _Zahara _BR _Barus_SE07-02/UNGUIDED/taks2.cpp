#include <iostream>

using namespace std;

int main() {
    int dim1, dim2, dim3;

    cout << "Masukkan ukuran dimensi pertama: ";
    cin >> dim1;
    cout << "Masukkan ukuran dimensi kedua: ";
    cin >> dim2;
    cout << "Masukkan ukuran dimensi ketiga: ";
    cin >> dim3;

    int array_3d[dim1][dim2][dim3];

    cout << "Masukkan Array 3D : " << endl;
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            for (int k = 0; k < dim3; k++) {
                cout << "Array 3D : [" << i <<"][" << j << "][" << k <<"] : ";
                cin >> array_3d[i][j][k];
            }
        }
    }

    cout << " Array 3D Adalah : " << endl;
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            for (int k = 0; k < dim3; k++) {
                cout << "Array 3D : [" << i << "][" << j << "][" << k << "] - " << array_3d[i][j][k] << endl;
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
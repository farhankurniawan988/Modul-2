#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Masukkan nilai (a, b, c): ";
    cin >> a >> b >> c;

    int array_3d[a][b][c];

    cout << "Masukkan Elemen Array 3D:" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            for (int k = 0; k < c; k++) {
                cout << "[" << i << "][" << j << "][" << k << "]: ";
                cin >> array_3d[i][j][k];
            }
        }
    }

    cout << "Elemen Array 3D:" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            for (int k = 0; k < c; k++) {
                cout << "[" << i << "][" << j << "][" << k << "] - " << array_3d[i][j][k] << endl;
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
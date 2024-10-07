#include <iostream>
using namespace std;

int main() {
    int x, y, z;


    cout << "Masukkan ukuran array (x y z): ";
    cin >> x >> y >> z;

    int arr[x][y][z];


    cout << "Masukkan elemen array 3D: " << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "arr[" << i << "][" << j << "][" << k << "] = ";
                cin >> arr[i][j][k];
            }
        }
    }


    cout << "Elemen array 3D: " << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}

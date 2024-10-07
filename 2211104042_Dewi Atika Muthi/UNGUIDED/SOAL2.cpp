#include <iostream>

using namespace std;

int main() {
    int x, y, z;
    cout << "Masukkan ukuran array 3D (x y z): ";
    cin >> x >> y >> z;

    int arr[10][10][10];  // Ukuran maksimum 10x10x10

    cout << "Masukkan elemen array:\n";
    for(int i = 0; i < x; i++)
        for(int j = 0; j < y; j++)
            for(int k = 0; k < z; k++)
                cin >> arr[i][j][k];

    cout << "Array 3D yang dimasukkan:\n";
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            for(int k = 0; k < z; k++)
                cout << arr[i][j][k] << " ";
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}

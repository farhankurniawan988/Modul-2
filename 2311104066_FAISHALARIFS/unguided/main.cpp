#include <iostream>
using namespace std;

int main() {
    int n;


    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];


    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    cout << "Data Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    cout << "Nomor Genap: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;


    cout << "Nomor Ganjil: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}

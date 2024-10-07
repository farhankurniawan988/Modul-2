#include <iostream>
using namespace std;

int main() {

// 1
    int n;

    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int dataArray[n];  
    int genap[n];      
    int ganjil[n];     
    int idxGenap = 0, idxGanjil = 0;

    cout << "Masukkan elemen-elemen array: ";
    for (int i = 0; i < n; ++i) {
        cin >> dataArray[i];

        if (dataArray[i] % 2 == 0) {
            genap[idxGenap++] = dataArray[i];
        } else {
            ganjil[idxGanjil++] = dataArray[i];
        }
    }

    cout << "Data Array : ";
    for (int i = 0; i < n; ++i) {
        cout << dataArray[i] << " ";
    }
    cout << endl;

    cout << "Nomor Genap : ";
    for (int i = 0; i < idxGenap; ++i) {
        cout << genap[i];
        if (i < idxGenap - 1) cout << ", ";
    }
    cout << endl;

    cout << "Nomor Ganjil : ";
    for (int i = 0; i < idxGanjil; ++i) {
        cout << ganjil[i];
        if (i < idxGanjil - 1) cout << ", ";
    }
    cout << endl;

    return 0;
}
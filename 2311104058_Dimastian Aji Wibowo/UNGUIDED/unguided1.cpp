#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> dataArray;
    int jumlahData, input;

    cout << "Masukkan jumlah elemen data array: ";
    cin >> jumlahData;

    cout << "Masukkan elemen data array: " << endl;
    for (int i = 0; i < jumlahData; i++) {
        cin >> input;
        dataArray.push_back(input);
    }

    cout << "Data array: ";
    for (int i = 0; i < jumlahData; i++) {
        cout << dataArray[i];
        if (i != jumlahData - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    cout << "Nomor genap: ";
    for (int i = 0; i < jumlahData; i++) {
        if (dataArray[i] % 2 == 0) {
            cout << dataArray[i];
            if (i != jumlahData - 2) {
                cout << ", ";
            }
        }
    }
    cout << endl;

    cout << "Nomor ganjil: ";
    for (int i = 0; i < jumlahData; i++) {
        if (dataArray[i] % 2 != 0) {
            cout << dataArray[i];
            if (i != jumlahData - 2) {
                cout << ", ";
            }
        }
    }
    cout << endl;
    return 0;
}

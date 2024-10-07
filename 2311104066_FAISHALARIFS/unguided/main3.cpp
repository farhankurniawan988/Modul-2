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


    int pilihan;
    do {
        cout << "Menu:\n";
        cout << "1. Cari Nilai Maksimum\n";
        cout << "2. Cari Nilai Minimum\n";
        cout << "3. Cari Nilai Rata-Rata\n";
        cout << "4. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {

                int maks = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] > maks) {
                        maks = arr[i];
                    }
                }
                cout << "Nilai Maksimum: " << maks << endl;
                break;
            }
            case 2: {

                int min = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] < min) {
                        min = arr[i];
                    }
                }
                cout << "Nilai Minimum: " << min << endl;
                break;
            }
            case 3: {

                float total = 0;
                for (int i = 0; i < n; i++) {
                    total += arr[i];
                }
                float rata = total / n;
                cout << "Nilai Rata-Rata: " << rata << endl;
                break;
            }
            case 4:
                cout << "Keluar program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    } while (pilihan != 4);

    return 0;
}

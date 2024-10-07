#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;    
    int arr[n];
    cout << "Masukkan elemen array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int pilihan;
    cout << "\nMenu:\n1. Cari Nilai Maksimum\n2. Cari Nilai Minimum\n3. Cari Nilai Rata-rata\n";
    cout << "Masukkan pilihan: ";
    cin >> pilihan;
    switch(pilihan) {
        case 1: {
            int maks = arr[0];
            for(int i = 1; i < n; i++) {
                if(arr[i] > maks) {
                    maks = arr[i];
                }
            }
            cout << "Nilai Maksimum: " << maks << endl;
            break;
        }
        case 2: {
            int min = arr[0];
            for(int i = 1; i < n; i++) {
                if(arr[i] < min) {
                    min = arr[i];
                }
            }
            cout << "Nilai Minimum: " << min << endl;
            break;
        }
        case 3: {
            float total = 0;
            for(int i = 0; i < n; i++) {
                total += arr[i];
            }
            float rata = total / n;
            cout << "Nilai Rata-rata: " << rata << endl;
            break;
        }
        default:
            cout << "Pilihan tidak valid!" << endl;
    }
    return 0;
}

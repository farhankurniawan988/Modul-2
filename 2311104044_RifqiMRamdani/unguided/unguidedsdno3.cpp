#include <iostream>
using namespace std;

int cariMaksimum(int arr[], int n) {
    int maksimum = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maksimum) {
            maksimum = arr[i];
        }
    }
    return maksimum;
}
int cariMinimum(int arr[], int n) {
    int minimum = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }
    return minimum;
}
double cariRataRata(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return static_cast<double>(total) / n;
}

int main() {
    int n, pilihan;


    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];

    cout << "Masukkan " << n << " elemen array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemen " << i + 1 << ": ";
        cin >> arr[i];
    }

    do {
        cout << "\nMenu Pilihan:" << endl;
        cout << "1. Cari Nilai Maksimum" << endl;
        cout << "2. Cari Nilai Minimum" << endl;
        cout << "3. Cari Nilai Rata-Rata" << endl;
        cout << "4. Keluar" << endl;
        cout << "Masukkan pilihan (1-4): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Nilai Maksimum: " << cariMaksimum(arr, n) << endl;
                break;
            case 2:
                cout << "Nilai Minimum: " << cariMinimum(arr, n) << endl;
                break;
            case 3:
                cout << "Nilai Rata-Rata: " << cariRataRata(arr, n) << endl;
                break;
            case 4:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid, silakan coba lagi." << endl;
        }

    } while (pilihan != 4);
    return 0;
}

#include <iostream>
using namespace std;

// Fungsi untuk menghitung nilai maksimum dari array
int cariMaksimum(int arr[], int n) {
    int maks = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maks) {
            maks = arr[i];
        }
    }
    return maks;
}

// Fungsi untuk menghitung nilai minimum dari array
int cariMinimum(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Fungsi untuk menghitung nilai rata-rata dari array
float cariRataRata(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return static_cast<float>(sum) / n;
}

int main() {
    int n, pilihan;

    // Meminta input jumlah elemen array
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];

    // Meminta input elemen-elemen array dari user
    cout << "Masukkan elemen-elemen array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    // Menu untuk memilih operasi yang akan dilakukan
    do {
        cout << "\nMenu Operasi Array: " << endl;
        cout << "1. Cari Nilai Maksimum" << endl;
        cout << "2. Cari Nilai Minimum" << endl;
        cout << "3. Cari Nilai Rata-Rata" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu (1-4): ";
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

#include <iostream>
using namespace std;

// Fungsi untuk mencari nilai maksimum
int cariMaksimum(int arr[], int n) {
    int maks = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maks) {
            maks = arr[i];
        }
    }
    return maks;
}

// Fungsi untuk mencari nilai minimum
int cariMinimum(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Fungsi untuk mencari nilai rata-rata
double cariRataRata(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return (double)total / n;
}

int main() {
    int n;

    // Meminta input jumlah elemen array dari pengguna
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];

    // Meminta input nilai-nilai elemen array
    cout << "Masukkan nilai elemen array:\n";
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    int pilihan;
    do {
        // Menampilkan menu
        cout << "\nMenu Pilihan:\n";
        cout << "1. Cari Nilai Maksimum\n";
        cout << "2. Cari Nilai Minimum\n";
        cout << "3. Cari Nilai Rata-Rata\n";
        cout << "4. Keluar\n";
        cout << "Masukkan pilihan (1-4): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Nilai maksimum: " << cariMaksimum(arr, n) << endl;
                break;
            case 2:
                cout << "Nilai minimum: " << cariMinimum(arr, n) << endl;
                break;
            case 3:
                cout << "Nilai rata-rata: " << cariRataRata(arr, n) << endl;
                break;
            case 4:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
                break;
        }
    } while (pilihan != 4);

    return 0;
}

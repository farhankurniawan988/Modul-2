#include <iostream>
using namespace std;

// Fungsi untuk mencari nilai maksimum
int cariMaksimum(int array[], int n) {
    int maksimum = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > maksimum) {
            maksimum = array[i];
        }
    }
    return maksimum;
}

// Fungsi untuk mencari nilai minimum
int cariMinimum(int array[], int n) {
    int minimum = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] < minimum) {
            minimum = array[i];
        }
    }
    return minimum;
}

// Fungsi untuk mencari nilai rata-rata
float cariRataRata(int array[], int n) {
    int jumlah = 0;
    for (int i = 0; i < n; i++) {
        jumlah += array[i];
    }
    return (float)jumlah / n;
}

int main() {
    int n;

    // Meminta input jumlah elemen array
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int array[n];

    // Meminta input nilai dari pengguna untuk setiap elemen array
    cout << "Masukkan nilai elemen array:\n";
    for (int i = 0; i < n; i++) {
        cout << "Elemen " << i + 1 << ": ";
        cin >> array[i];
    }

    int pilihan;
    do {
        // Menampilkan menu pilihan
        cout << "\nPilih Operasi:\n";
        cout << "1. Cari Nilai Maksimum\n";
        cout << "2. Cari Nilai Minimum\n";
        cout << "3. Cari Nilai Rata-rata\n";
        cout << "4. Keluar\n";
        cout << "Masukkan pilihan Anda (1-4): ";
        cin >> pilihan;

        // Switch case berdasarkan pilihan pengguna
        switch (pilihan) {
        case 1:
            cout << "Nilai Maksimum: " << cariMaksimum(array, n) << endl;
            break;
        case 2:
            cout << "Nilai Minimum: " << cariMinimum(array, n) << endl;
            break;
        case 3:
            cout << "Nilai Rata-rata: " << cariRataRata(array, n) << endl;
            break;
        case 4:
            cout << "Keluar dari program.\n";
            break;
        default:
            cout << "Pilihan tidak valid! Silakan pilih antara 1-4.\n";
            break;
        }
    } while (pilihan != 4);

    return 0;
}

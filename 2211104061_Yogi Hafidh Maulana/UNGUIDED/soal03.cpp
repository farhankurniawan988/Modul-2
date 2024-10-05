#include <iostream>
#include <vector>
using namespace std;

// Fungsi untuk mencari nilai maksimum
int cariMaksimum(vector<int> &arr) {
    int maksimum = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maksimum) {
            maksimum = arr[i];
        }
    }
    return maksimum;
}

// Fungsi untuk mencari nilai minimum
int cariMinimum(vector<int> &arr) {
    int minimum = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }
    return minimum;
}

// Fungsi untuk mencari nilai rata-rata
double cariRataRata(vector<int> &arr) {
    int jumlah = 0;
    for (int i = 0; i < arr.size(); i++) {
        jumlah += arr[i];
    }
    return static_cast<double>(jumlah) / arr.size();
}

int main() {
    vector<int> dataArray;
    int n, pilihan, nilai;

    // Meminta input jumlah elemen array
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    // Memasukkan nilai elemen array
    cout << "Masukkan " << n << " elemen array:\n";
    for (int i = 0; i < n; i++) {
        cin >> nilai;
        dataArray.push_back(nilai);
    }

    do {
        // Menampilkan menu
        cout << "\nMENU\n";
        cout << "1. Cari Nilai Maksimum\n";
        cout << "2. Cari Nilai Minimum\n";
        cout << "3. Cari Nilai Rata-rata\n";
        cout << "4. Keluar\n";
        cout << "Pilih opsi (1-4): ";
        cin >> pilihan;

        // Menentukan aksi berdasarkan pilihan menu
        switch (pilihan) {
            case 1:
                cout << "Nilai Maksimum: " << cariMaksimum(dataArray) << endl;
                break;
            case 2:
                cout << "Nilai Minimum: " << cariMinimum(dataArray) << endl;
                break;
            case 3:
                cout << "Nilai Rata-rata: " << cariRataRata(dataArray) << endl;
                break;
            case 4:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid! Silakan pilih lagi.\n";
                break;
        }
    } while (pilihan != 4);

    return 0;
}

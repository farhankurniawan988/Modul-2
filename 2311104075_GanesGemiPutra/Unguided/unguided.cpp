#include <iostream>
#include <vector>
using namespace std;

/*int main() {
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    vector<int> arr(n);
    vector<int> genap, ganjil;

    // Input array
    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            genap.push_back(arr[i]);
        } else {
            ganjil.push_back(arr[i]);
        }
    }

    // Display full array
    cout << "Data Array : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Display even numbers
    cout << "Nomor Genap : ";
    for (int i = 0; i < genap.size(); i++) {
        cout << genap[i] << " ";
    }
    cout << endl;

    // Display odd numbers
    cout << "Nomor Ganjil : ";
    for (int i = 0; i < ganjil.size(); i++) {
        cout << ganjil[i] << " ";
    }
    cout << endl;

    return 0;
}

*/


#include <iostream>
using namespace std;

/*int main() {
    int x, y, z;

    // Input untuk ukuran array tiga dimensi
    cout << "Masukkan ukuran dimensi pertama: ";
    cin >> x;
    cout << "Masukkan ukuran dimensi kedua: ";
    cin >> y;
    cout << "Masukkan ukuran dimensi ketiga: ";
    cin >> z;

    // Membuat array tiga dimensi secara dinamis
    int ***array3D = new int**[x];
    for (int i = 0; i < x; ++i) {
        array3D[i] = new int*[y];
        for (int j = 0; j < y; ++j) {
            array3D[i][j] = new int[z];
        }
    }

    // Input elemen-elemen array
    cout << "Masukkan elemen-elemen array 3D:" << endl;
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cout << "Masukkan elemen pada posisi (" << i << ", " << j << ", " << k << "): ";
                cin >> array3D[i][j][k];
            }
        }
    }

    // Menampilkan array 3D
    cout << "\nArray 3D adalah:" << endl;
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cout << "Elemen di (" << i << ", " << j << ", " << k << "): " << array3D[i][j][k] << endl;
            }
        }
    }

    // Menghapus memori yang dialokasikan untuk array 3D
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            delete[] array3D[i][j];
        }
        delete[] array3D[i];
    }
    delete[] array3D;

    return 0;
}


*/
#include <iostream>
using namespace std;

// Fungsi untuk mencari nilai maksimum
int cariMaksimum(int arr[], int n) {
    int maks = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maks) {
            maks = arr[i];
        }
    }
    return maks;
}

// Fungsi untuk mencari nilai minimum
int cariMinimum(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Fungsi untuk menghitung nilai rata-rata
float cariRataRata(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; ++i) {
        total += arr[i];
    }
    return static_cast<float>(total) / n;
}

int main() {
    int n, pilihan;

    // Input jumlah elemen array
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];

    // Input elemen array
    cout << "Masukkan elemen-elemen array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    do {
        // Menu pilihan
        cout << "\nMenu:\n";
        cout << "1. Cari nilai maksimum\n";
        cout << "2. Cari nilai minimum\n";
        cout << "3. Cari nilai rata-rata\n";
        cout << "4. Keluar\n";
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan;

        // Proses berdasarkan pilihan
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
        }
    } while (pilihan != 4);

    return 0;
}

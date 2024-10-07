#include <iostream>
using namespace std;

// int main() {
//     const int size = 10;
//     int arr[size];

//     cout << "Masukkan 10 angka:\n";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     cout << "Data Array : ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     cout << "Nomor Genap : ";
//     for (int i = 0; i < size; i++) {
//         if (arr[i] % 2 == 0) {
//             cout << arr[i] << ", ";
//         }
//     }
//     cout << endl;

//     cout << "Nomor Ganjil : ";
//     for (int i = 0; i < size; i++) {
//         if (arr[i] % 2 != 0) {
//             cout << arr[i] << ", ";
//         }
//     }
//     cout << endl;

//     return 0;
// }

// int main() {
//     int x, y, z;

//     cout << "Masukkan ukuran dimensi pertama (x): ";
//     cin >> x;
//     cout << "Masukkan ukuran dimensi kedua (y): ";
//     cin >> y;
//     cout << "Masukkan ukuran dimensi ketiga (z): ";
//     cin >> z;

//     int array[x][y][z];

//     cout << "Masukkan elemen array 3D:" << endl;
//     for (int i = 0; i < x; i++) {
//         for (int j = 0; j < y; j++) {
//             for (int k = 0; k < z; k++) {
//                 cout << "Elemen [" << i << "][" << j << "][" << k << "]: ";
//                 cin >> array[i][j][k];
//             }
//         }
//     }

//     cout << "\nElemen Array 3D adalah:" << endl;
//     for (int i = 0; i < x; i++) {
//         for (int j = 0; j < y; j++) {
//             for (int k = 0; k < z; k++) {
//                 cout << "Elemen [" << i << "][" << j << "][" << k << "] = " << array[i][j][k] << endl;
//             }
//         }
//     }

//     return 0;
// }

// int main() {
//     int n;

//     cout << "Masukkan jumlah elemen array: ";
//     cin >> n;

//     int arr[n], total = 0, maks, min;

//     cout << "Masukkan elemen array:\n";
//     for (int i = 0; i < n; ++i) {
//         cin >> arr[i];
//         total += arr[i];

//         if (i == 0) {
//             maks = min = arr[i];
//         } else {
//             if (arr[i] > maks) maks = arr[i];
//             if (arr[i] < min) min = arr[i];
//         }
//     }

//     cout << "\nElemen yang ada: ";
//     for (int i = 0; i < n; ++i)
//         cout << arr[i] << " ";
 
//     cout << "\nNilai maksimum: " << maks;
//     cout << "\nNilai minimum: " << min;
//     cout << "\nNilai rata-rata: " << (double)total / n << endl;

//     return 0;
// }


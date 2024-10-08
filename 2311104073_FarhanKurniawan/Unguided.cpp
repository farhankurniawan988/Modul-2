// #JAWABAN NO.1

// #include <iostream>
// using namespace std;

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


// #JAWABAN NO.2...

// #include <iostream>
// using namespace std;

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


// #JAWABAN NO.3...

#include <iostream>
#include <vector>
#include <limits>

using namespace std;

vector<int> getArray() {
    int n, input;
    vector<int> arr;

    cout << "Berapa banyak elemen dalam array? ";
    cin >> n;

    cout << "Masukkan " << n << " angka: ";
    for (int i = 0; i < n; ++i) {
        cin >> input;
        arr.push_back(input);
    }
    
    return arr;
}

int findMax(const vector<int>& arr) {
    int max_val = numeric_limits<int>::min();
    for (int num : arr) {
        if (num > max_val) {
            max_val = num;
        }
    }
    return max_val;
}

int findMin(const vector<int>& arr) {
    int min_val = numeric_limits<int>::max();
    for (int num : arr) {
        if (num < min_val) {
            min_val = num;
        }
    }
    return min_val;
}

double findAvg(const vector<int>& arr) {
    double sum = 0;
    for (int num : arr) {
        sum += num;
    }
    return sum / arr.size();
}

int main() {
    vector<int> array = getArray();

    cout << "Nilai maksimum: " << findMax(array) << endl;
    cout << "Nilai minimum: " << findMin(array) << endl;
    cout << "Nilai rata-rata: " << findAvg(array) << endl;

    return 0;
}

#include <iostream>

using namespace std;

int maks(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[], int n) {
    int min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

float rata(int arr[], int n) {
    float sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

int main() {
    int n, choice;
    int arr[100];

    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Jumlah elemen harus antara 1 dan 100.\n";
        return 1;
    }

    cout << "Masukkan elemen array:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\nMenu:\n";
        cout << "1. Cari Nilai Maksimum\n";
        cout << "2. Cari Nilai Minimum\n";
        cout << "3. Hitung Nilai Rata-rata\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Nilai Maksimum: " << maks(arr, n) << endl;
                break;
            case 2:
                cout << "Nilai Minimum: " << min(arr, n) << endl;
                break;
            case 3:
                cout << "Nilai Rata-rata: " << rata(arr, n) << endl;
                break;
            case 4:
                cout << "Terima kasih!\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    } while(choice != 4);

    return 0;
}

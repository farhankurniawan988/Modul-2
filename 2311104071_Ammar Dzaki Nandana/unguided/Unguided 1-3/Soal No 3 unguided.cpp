#include <iostream>
#include <limits> 

void findMax(int array[], int n) {
    int max = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    std::cout << "Nilai maksimum: " << max << std::endl;
}

void findMin(int array[], int n) {
    int min = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    std::cout << "Nilai minimum: " << min << std::endl;
}

void findAverage(int array[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i];
    }
    double average = static_cast<double>(sum) / n;
    std::cout << "Nilai rata-rata: " << average << std::endl;
}

int main() {
    int n;

    std::cout << "Masukkan jumlah elemen array: ";
    std::cin >> n;

    int array[n];

    std::cout << "Masukkan elemen array:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> array[i];
    }

    int pilihan;
    do {

        std::cout << "\nMenu:\n";
        std::cout << "1. Cari nilai maksimum\n";
        std::cout << "2. Cari nilai minimum\n";
        std::cout << "3. Cari nilai rata-rata\n";
        std::cout << "4. Keluar\n";
        std::cout << "Pilih opsi: ";
        std::cin >> pilihan;

        switch (pilihan) {
            case 1:
                findMax(array, n);
                break;
            case 2:
                findMin(array, n);
                break;
            case 3:
                findAverage(array, n);
                break;
            case 4:
                std::cout << "Keluar dari program." << std::endl;
                break;
            default:
                std::cout << "Pilihan tidak valid. Coba lagi." << std::endl;
        }
    } while (pilihan != 4);

    return 0;
}

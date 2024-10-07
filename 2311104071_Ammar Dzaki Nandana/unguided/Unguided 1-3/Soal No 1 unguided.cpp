#include <iostream>
#include <vector>

int main() {
    int n;
    std::vector<int> array, genap, ganjil;

    std::cout << "Masukkan jumlah elemen array: ";
    std::cin >> n;
    
    std::cout << "Masukkan " << n << " elemen array: ";
    for (int i = 0; i < n; ++i) {
        int temp;
        std::cin >> temp;
        array.push_back(temp);

        if (temp % 2 == 0) {
            genap.push_back(temp);
        } else {
            ganjil.push_back(temp);
        }
    }

    std::cout << "Data array = ";
    for (int i = 0; i < n; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Nomor genap = ";
    for (int i = 0; i < genap.size(); ++i) {
        std::cout << genap[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Nomor ganjil = ";
    for (int i = 0; i < ganjil.size(); ++i) {
        std::cout << ganjil[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

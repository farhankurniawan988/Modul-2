#include <iostream>

int main() {
    int x, y, z;
    
    std::cout << "Masukkan ukuran dimensi pertama (x): ";
    std::cin >> x;
    std::cout << "Masukkan ukuran dimensi kedua (y): ";
    std::cin >> y;
    std::cout << "Masukkan ukuran dimensi ketiga (z): ";
    std::cin >> z;

    int array[x][y][z];

    std::cout << "Masukkan elemen array 3D:" << std::endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                std::cout << "array[" << i << "][" << j << "][" << k << "] = ";
                std::cin >> array[i][j][k];
            }
        }
    }

    std::cout << "Array 3D yang diinput adalah:" << std::endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                std::cout << "array[" << i << "][" << j << "][" << k << "] = " << array[i][j][k] << std::endl;
            }
        }
    }

    return 0;
}

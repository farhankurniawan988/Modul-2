#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Array 1 dimensi
    int nilai[5] = { 3, 4, 5, 6, 7 };
    cout << nilai[2] << endl;

    // Array 2 dimensi
    int nilai2[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Loop untuk mencetak elemen array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << nilai2[i][j] << " ";
        }
        cout << endl;
    }

    // POINTER
    int x, y;
    int *px;
    x = 87;
    px = &x;
    y = *px;

    cout << "Alamat x = " << &x << endl;
    cout << "Isi px = " << px << endl;
    cout << "Isi x = " << x << endl;
    cout << "Nilai yang ditunjuk px = " << *px << endl;
    cout << "Nilai y = " << y << endl;

}

// FUNGSI
    int penjumlahan(int a, int b) {
        return a + b;
    }

    void greet(string name) {  // Ganti String dengan string
        cout << "Hello, " << name << "!" << endl;
    }

    int main1() {
        int hasil = penjumlahan(5, 6);
        cout << "Hasil: " << hasil << endl;

        greet("Tika");

        return 0; //

}

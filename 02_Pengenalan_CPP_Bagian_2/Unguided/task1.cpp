#include <iostream>

using namespace std;

int main() {
    int angka;
    cout << "Masukkan jumlah baris array : ";
    cin >> angka;

    int data_array[angka];
    int nomor_genap[angka / 2];
    int nomor_ganjil[angka / 2];
    int indeks_genap = 0;
    int indeks_ganjil = 0;

    cout << "Masukkan nilai ke dalam array : " << endl;
    for (int i = 0; i < angka; i++) {
        cout << "Nilai baris ke : " << i + 1 << ": ";
        cin >> data_array[i];
    }

    for (int i = 0; i < angka; i++) {
        if (data_array[i] % 2 == 0) {
            nomor_genap[indeks_genap] = data_array[i];
            indeks_genap++;
        } else {
            nomor_ganjil[indeks_ganjil]  =  data_array[i];
            indeks_ganjil++;
        }
    }

    cout << "Data Array : ";
    for (int i = 0; i < angka; i++) {
        cout << data_array[i] << " ";
    }
    cout << endl;

    cout << "Nomor Genap : ";
    for (int i = 0; i < indeks_genap; i++) {
        cout << nomor_genap[i] << " ";
    }
    cout << endl;

    cout << "Nomor Ganjil : ";
    for (int i = 0; i < indeks_ganjil; i++) {
        cout << nomor_ganjil[i] << " ";
    }
    cout << endl;

    return 0;
}
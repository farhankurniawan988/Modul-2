
//SOAL NO 1

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> array;
    vector<int> genap;
    vector<int> ganjil;
    int input;

    cout << "Masukkan 10 angka:\n";
    for(int i = 0; i < 10; i++) {
        cin >> input;
        array.push_back(input);

        if(input % 2 == 0) {
            genap.push_back(input);
        } else {
            ganjil.push_back(input);
        }
    }

    cout << "Data Array : ";
    for(int i = 0; i < array.size(); i++) {
        cout << array[i];
        if(i < array.size() - 1) cout << " ";
    }
    cout << endl;

    cout << "Nomor Genap : ";
    for(int i = 0; i < genap.size(); i++) {
        cout << genap[i];
        cout << ", ";
    }
    cout << endl;

    cout << "Nomor Ganjil : ";
    for(int i = 0; i < ganjil.size(); i++) {
        cout << ganjil[i];
        cout << ", ";
    }
    cout << endl;

    return 0;
}






//SOAL NO 2
#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    cout << "Masukkan ukuran array 3 dimensi" << endl;
    cout << "Masukkan ukuran x: ";
    cin >> x;
    cout << "Masukkan ukuran y: ";
    cin >> y;
    cout << "Masukkan ukuran z: ";
    cin >> z;

    int*** arr = new int**[x];
    for(int i = 0; i < x; i++) {
        arr[i] = new int*[y];
        for(int j = 0; j < y; j++) {
            arr[i][j] = new int[z];
        }
    }

    cout << "\nMasukkan elemen array:" << endl;
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            for(int k = 0; k < z; k++) {
                cout << "arr[" << i << "][" << j << "][" << k << "] = ";
                cin >> arr[i][j][k];
            }
        }
    }

    cout << "\nIsi array 3 dimensi:" << endl;
    for(int i = 0; i < x; i++) {
        cout << "Layer ke-" << i+1 << ":" << endl;
        for(int j = 0; j < y; j++) {
            for(int k = 0; k < z; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            delete[] arr[i][j];
        }
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}



//SOAL NO 3
#include <iostream>
using namespace std;

int main() {
    int n;
    float rata_rata;
    int jumlah = 0;

    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];

    // Input array
    for(int i = 0; i < n; i++) {
        cout << "Masukkan angka ke-" << i+1 << ": ";
        cin >> arr[i];
    }

    while(true) {
        cout << "\nMENU:" << endl;
        cout << "1. Cari nilai maksimum" << endl;
        cout << "2. Cari nilai minimum" << endl;
        cout << "3. Hitung rata-rata" << endl;
        cout << "4. Keluar" << endl;

        int pilihan;
        cout << "Pilih menu (1-4): ";
        cin >> pilihan;

        switch(pilihan) {
            case 1: {
                int max = arr[0];
                for(int i = 1; i < n; i++) {
                    if(arr[i] > max) {
                        max = arr[i];
                    }
                }
                cout << "Nilai maksimum: " << max << endl;
                break;
            }
            case 2: {
                int min = arr[0];
                for(int i = 1; i < n; i++) {
                    if(arr[i] < min) {
                        min = arr[i];
                    }
                }
                cout << "Nilai minimum: " << min << endl;
                break;
            }
            case 3: {
                jumlah = 0;
                for(int i = 0; i < n; i++) {
                    jumlah += arr[i];
                }
                rata_rata = (float)jumlah / n;
                cout << "Nilai rata-rata: " << rata_rata << endl;
                break;
            }
            case 4:
                cout << "Program selesai" << endl;
                return 0;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    }

    return 0;
}

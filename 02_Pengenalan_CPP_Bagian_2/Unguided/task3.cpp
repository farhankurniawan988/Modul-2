#include <iostream>

using namespace std;

int main() {
    int nilai;
    cout << "Masukkan Jumlah Array : ";
    cin >> nilai;

    int array[nilai];

    cout << "Masukkan Nilai Array : " << endl;
    for (int i = 0; i < nilai; i++) {
        cout << i + 1 << ": ";
        cin >> array[i];
    }

    int max = array[0];
    for (int i = 1; i < nilai; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    int min = array[0];
    for (int i = 1; i < nilai; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    int sum = 0;
    for (int i = 0; i < nilai; i++) {
        sum += array[i];
    }
    double avg = (double)sum / nilai;

    cout << "Hasil:" << endl;
    cout << "Nilai Maksimum: " << max << endl;
    cout << "Nilai Minimum: " << min << endl;
    cout << "Nilai Rata-Rata: " << avg << endl;

    return 0;
}
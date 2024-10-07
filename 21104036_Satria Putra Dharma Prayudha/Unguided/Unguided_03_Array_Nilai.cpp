#include <iostream>
#include <conio.h>

using namespace std;

//  program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user

int main(){
    int n;
    cout << "Masukkan jumlah data : ";
    cin >> n;

    int data[n];
    for (int i = 0; i < n; i++){
        cout << "Masukkan data ke-" << i+1 << " : ";
        cin >> data[i];
    }

    cout << endl;

    cout << "Data yang dimasukkan : ";
    for (int i = 0; i < n; i++){
        cout << data[i] << " ";
    }

    cout << endl;

    int max = data[0];
    int min = data[0];
    int sum = 0;
    for (int i = 0; i < n; i++){
        if (data[i] > max){
            max = data[i];
        }
        if (data[i] < min){
            min = data[i];
        }
        sum += data[i];
    }

    cout << "Nilai maksimum : " << max << endl;
    cout << "Nilai minimum : " << min << endl;
    cout << "Nilai rata-rata : " << (float)sum/n << endl;

    getch();
    return 0;
}
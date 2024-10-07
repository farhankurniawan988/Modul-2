#include <iostream>
#include <conio.h>

using namespace std;

//Program untuk menampilkan Output seperti berikut dengan data yang diinputkan yaitu Array menjadi bilangan ganjil dan genap

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
    

    cout << "Data ganjil : ";
    for (int i = 0; i < n; i++){
        if (data[i] % 2 != 0){
            cout << data[i] << " ";
        }
    }

    cout << endl;

    cout << "Data genap : ";
    for (int i = 0; i < n; i++){
        if (data[i] % 2 == 0){
            cout << data[i] << " ";
        }
    }

    cout << endl;

    getch();
    return 0;
}
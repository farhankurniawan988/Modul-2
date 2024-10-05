#include <iostream>
#include <conio.h>
using namespace std;

// FUNGSI 
int penjumlahan(int a, int b){
    return a + b;
}

// PROCEDUR
void greet(string name){
    cout << "Hallo, " << name << "!" << endl;
}

int main(){
    // Pemanggilan fungsi
    int hasil = penjumlahan(5, 3);
    cout << "Hasil: " << hasil << endl;

    // Pemanggilan Procedur
    greet("John Doe");
    
    // ARRAY 1D
    int nilai[10] = {1, 2, 3, 4, 5};

    // Pemanggilan Array menggunakan index
    cout << nilai[0];
    cout << nilai[1];
    cout << nilai[2];
    cout << nilai[3];
    cout << nilai[4];

    // Pemanggilan arrya menggunakan Looping
    for(int i = 0; i <5; i++) { 
        cout << nilai[i] << endl;
    }

    // ARRAY 2D
    int data_nilai[3][4] = {{1,2,3,4}, {4, 6, 7, 8}, {9, 10, 11, 12}}; 

    for (int i = 0; i < 3; i++){
        for (int j = 0; j<4;j++){
            cout << data_nilai[i][j] << " ";
        }
        cout << endl;
    }
    
    // ARRAY BANYAK DIMENSI 
    int data_rumit[4][6][6]; 

    // POINTER 
    int x, y;
    int *px;
    x= 87;
    px = &x;
    y= *px;

    cout << "Alamat x: " << &x << endl;
    cout << "Isi px: " << px << endl;
    cout << "Isi X: " << x << endl;
    cout << "Nilai yang ditunjuk px: " << *px << endl;
    cout << "Nilai y: " << y << endl;
    getch();

    return 0;
}
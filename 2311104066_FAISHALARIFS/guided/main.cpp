#include <iostream>
#include <conio.h>

using namespace std;
/*
int penjumlahan(int a, int b){
    return a + b;

}
void greet(string name){
     cout << "hello" << name << "!" << endl;
}

int main(){
    int hasil = penjumlahan(5, 3);

    cout << "hasil "<< hasil << endl;

    greet("Isal");






    int nilai[5]={1,2,3,4,5};
    cout << nilai[0];
    cout << nilai[1];
    cout << nilai[2];
    cout << nilai[3];
    cout << nilai[4];

}*/
/*
int main() {
    int nilai[5] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5; i++) {  // Perbaikan pada kondisi 'i < 5' bukan '1 < 5'
        cout << nilai[i] << endl;
    }

    return 0;
}*/


int main() {
    int nilai[3][4] ={
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << nilai[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//pointer

/*
int main() {
    int x, y;
    int *px;

    x = 87;
    px = &x;

    // Menampilkan alamat dan nilai
    cout << "Alamat x= " << &x << endl;        // Menampilkan alamat variabel x
    cout << "Isi px= " << px << endl;          // Menampilkan isi dari px (alamat x)
    cout << "Isi x= " << x << endl;            // Menampilkan nilai dari variabel x
    cout << "Nilai yang ditunjuk px= " << *px << endl;  // Menampilkan nilai yang ditunjuk oleh pointer px
    cout << "Nilai y= " << y << endl;          // Menampilkan nilai y yang sama dengan nilai x

    getch();  // Menunggu input dari keyboard agar program tidak langsung tertutup (hanya berlaku di lingkungan tertentu)

    return 0;
}*/


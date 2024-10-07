#include <iostream>
#include <conio.h>

using namespace std;
int penjumlahan(int a, int b){
  return a+b;
}

void greet(string name){
  cout << "Hello, " << name << "!" << endl;
}

   int main(){
  int hasil = penjumlahan(5,3);

  cout << "hasil " << hasil << endl;

  greet("Alice");
}

// int main(){
//     // Array
//     int nilai[10] = {1, 2, 3, 4, 5}; // Array 1D
//     int data_nilai[4][3]; // Array 2D
//     int data_rumit[4][6][6]; // Array banyak dimensi

//     // Pemanggilan array menggunakan index
//     cout << nilai[0];
//     cout << nilai[1];
//     cout << nilai[2];
//     cout << nilai[3];
//     cout << nilai[4];

//     // Pemanggilan array menggunakan Looping
//     for(int i = 0; i <5; i++) {
//         cout << nilai[i] << endl;

    // // Array 2 dimensi
    // int nilai [3][4] ={
    //           {1,2,3,4},
    //           {5,6,7,8},
    //           {9,10,11,12}
    // };

    // for (int i=0; i<3; i++){
    //   for(int j=0; j<4; j++){
    //     cout << nilai [i][j] << " ";
    // }
    // cout << endl;
    // }

//     // Pointer
//     int x, y;
//     int *px;
//     x = 87;
//     px = &x;
//     y = *px;

//     cout << "Alamat x= " << &x << endl;
//     cout << "Isi px= " << px << endl;
//     cout << "Nilai yang ditunjuk px= " << *px << endl;
//     cout << "Nilai y= " << y << endl;

//     getch();
// }

//     // Pointer dan Array
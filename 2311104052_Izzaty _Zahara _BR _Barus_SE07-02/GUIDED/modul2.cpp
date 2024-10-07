#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;


//     int nilai [5] ={1, 2, 3, 4, 5};
//     cout << nilai [0];
//     cout << nilai [1];
//     cout << nilai [2];
//     cout << nilai [3];
//     cout << nilai [4];

//     for(int i=0; i<5; i++){
//         cout << nilai[i] << endl;
//     }
// }

    // array 2d
//     int nilai [3][4]={
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12}
//     };
//     for(int i =0; i<3; i++){
//         for(int j =0; j<4; j++){
//             cout << nilai[i][j] << " ";
//     }
//     cout << endl;
//     }
// }
// // pointer
int main(){
int x,y;
int *px;
x= 87;
px = &x;
y = *px;

cout << "alamat x= " << &x <<endl;
cout << "isi px= " << px << endl;
cout << "isi x= " << x << endl;
cout << "Nilai yang ditunjuk px= " <<  *px << endl;
cout << "nilai y = " << y << endl;
getch();
}

int penjumlahan (int a, int b){
    return a+b;
}

// void greet (string name){
//     cout << "hallo"  << name << "!" << endl;
// }

// int main() {
//     int hasil = penjumlahan(5, 3);
//     cout << "hasil: " << hasil << endl;
//     greet("izza");
// }

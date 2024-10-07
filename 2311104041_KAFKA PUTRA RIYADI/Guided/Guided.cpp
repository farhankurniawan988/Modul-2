#include <iostream>
#include <conio.h>

using namespace std;

// int penjumlahan(int a, int b){
//     return a + b;
//     }

//     void greet(string name){
//         cout<< "Hello, " << name << "!" << endl;
//     }
        

// int main(){
//     int nilai[5]={1,2,3,4,5};
//     cout << nilai[0];
//     cout << nilai[1];        
//     cout << nilai[2];
//     cout << nilai[3];
//     cout << nilai[4];

// }

// int nilai[5]={1,2,3,4,5};

// for(int i=0; i<5; i++){
//     cout << nilai[i]<< endl;

//     }
// }

// #Array 2 dimensi
int nilai[3][4]={
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
};

for(int i=0; i<3; i++){
    for (int j=0; j<4; j++){
        cout << nilai[i][j] << " ";
    }
    cout << endl;
    }

// #POINTER

// int x,y;
// int *px;
// x = 87;
// px = &x;
// y= *px;

// cout << "Alamat x = " << &x << endl;
// cout << "isi px = " << px << endl;
// cout << "isi x = " << x << endl;
// cout << "Nilai y= " << y << endl;
// getch(); 
// return 0;

// int hasil = penjumlahan(5, 3);
// cout << "hasilnya adalah" <<  hasil << endl;

// greet("alice");

// }


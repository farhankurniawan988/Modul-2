#include <iostream>
#include <fstream>
#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
/*
//array 1 dimensi
int nilai[5]={1,2,3,4,5};

for(int i=0; i<5; i++){
    cout << nilai[i] <<endl;
}
}

*/

//array 2 dimensi
/*
int nilai[3][4] ={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
};

for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
        cout << nilai[i][j] << " ";
    }
    cout << endl;
}

}
*/


//pointer
/*
int x,y;
int *px;
px = &x;
y = *px;

cout << "Alamat x=" << &x <<endl;
cout << "isi px=" << px <<endl;
cout << "isi X=" << x <<endl;
cout << "Nilai yang ditunjuk px=" << &x <<endl;
cout << "Nilai y=" << y <<endl;
getch();

}
*/


//fungsi dan prosedur
int penjumlahan(int a,int b){
    return a + b;
}

void greet(string name){
cout << "Hello," << name <<"!" <<endl;
}

int main(){
    int hasil = penjumlahan(5,3);

    cout << "hasil " << hasil << endl;

    greet("Fahmi");
}

}

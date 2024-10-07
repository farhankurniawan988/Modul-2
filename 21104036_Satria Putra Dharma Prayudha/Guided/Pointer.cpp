#include <iostream>
#include <conio.h>

using namespace std;

// Pointer
int main(){
    int x,y;
    int *px;
    px = &x;
    y = *px;

    cout << "Alamat x= " << &x << endl;
    cout << "isi px= " << px << endl;
    cout << "Alamat x= " << x << endl;
    cout << "Nilai yang ditunjuk px= " << *px << endl;
    cout << "Nilai y= " << y << endl;
    getch();
}
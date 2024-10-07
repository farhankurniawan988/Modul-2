#include <iostream>
#include <conio.h>

using namespace std;
int main() {
    /*
    int nilai[5]={1,2,3,4,5};

    cout << nilai[0] << nilai[1] << nilai[2] << nilai[3] << nilai[4] << endl;

    for (int i=0;i<5;i++) {
        cout << nilai[i] << endl;
    }

    int nilai[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    for (int i=0;i<3;i++) {
        for (int j=0;j<4;j++) {
            cout << nilai[i][j] << "";
        }
        cout << endl;
    }
    */
    int x,y;
    int *px;
    x=87;
    px = &x;
    y = *px;

    cout << "alamat x: "<< &x << endl;
    cout << "isi px:"<<px << endl;
    cout << "nilai X:" << x << endl;
    cout << "alamat yang ditunjuk px: "<< *px << endl;
    cout << "nilai y:" << y << endl;
    getch();
}

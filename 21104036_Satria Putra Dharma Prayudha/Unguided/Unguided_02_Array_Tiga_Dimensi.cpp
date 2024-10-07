#include <iostream>
#include <conio.h>

using namespace std;

// Input array tiga dimensi tetapi jumlah atau ukuran elemennya diinputkan

int main (){
    int x, y, z;
    cout << "Masukkan jumlah elemen x : ";
    cin >> x;
    cout << "Masukkan jumlah elemen y : ";
    cin >> y;
    cout << "Masukkan jumlah elemen z : ";
    cin >> z;

    int data[x][y][z];

    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            for (int k = 0; k < z; k++){
                cout << "Masukkan data ke-" << i+1 << " : ";
                cin >> data[i][j][k];
            }
        }
    }

    cout << endl;

    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            for (int k = 0; k < z; k++){
                cout << data[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    getch();
    return 0;
}

#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    // pointer
    int x, y;
    int *px;
    x = 87;
    px = &x;
    y = *px;

    cout << "alamat x = " << &x << endl;
    cout << "isi px = " << px << endl;
    cout << "isi x =" << x << endl;
    cout << "nilai yang ditunjuk px = " << *px << endl;
    cout << "nilai y = " << y << endl;
    getch();
}
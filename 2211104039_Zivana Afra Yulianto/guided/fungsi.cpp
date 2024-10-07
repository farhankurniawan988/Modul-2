#include <iostream>
#include <conio.h>

using namespace std;

// fungi
int penjumlahan(int a, int b)
{
    return a + b;
}

int main()
{
    // pemanggilan fungsi
    int hasil = penjumlahan(5, 3);
    cout << hasil << endl;
}
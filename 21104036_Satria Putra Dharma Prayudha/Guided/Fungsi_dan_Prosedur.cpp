#include <iostream>
#include <conio.h>

using namespace std;

// Fungsi dan Prosedur
int penjumlahan(int a, int b){
    return a + b;
}

void greet(string name){
    cout << "Hello, " << name << endl;
}

int main(){
    int hasil = penjumlahan (5,3);
    cout << "Hasil Penjumlahan adalah :" << hasil << endl;

    greet("Yudha");
}
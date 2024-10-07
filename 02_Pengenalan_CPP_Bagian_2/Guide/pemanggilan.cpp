#include <iostream>

using namespace std;

// Pemanggilan
int penjumlahan(int a, int b){
    return a + b;
}

void greet(string name){
    cout << "Hello, " << name << "!" << endl;
}

int main(){
    int hasil = penjumlahan(5,3);

    cout << "hasil " << hasil << endl;
    
    greet("alucard");

}
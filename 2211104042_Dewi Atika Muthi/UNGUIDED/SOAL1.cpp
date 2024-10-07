#include <iostream>

using namespace std;

int main() {
    int arr[10];
    
    cout << "Masukkan 10 angka:\n";
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    
    cout << "Data Array : ";
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    
    cout << "\nNomor Genap : ";
    for(int i = 0; i < 10; i++) {
        if(arr[i] % 2 == 0) {
            cout << arr[i] << ", ";
        }
    }
    
    cout << "\nNomor Ganjil : ";
    for(int i = 0; i < 10; i++) {
        if(arr[i] % 2 != 0) {
            cout << arr[i] << ", ";
        }
    }
    
    return 0;
}
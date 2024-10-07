#include <iostream>

using namespace std;

// Array adalah kumpulan data yang memiliki tipe data yang sama
int main(){
    int nilai [5]={1,2,3,4,5};

    for (int i = 0; i < 5; i++){
        cout << "Nilai ke-" << i << " adalah " << nilai[i] << endl;
    }
}

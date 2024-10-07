#include <iostream>

using namespace std;

// Array 2 Dimensi
int main(){
   int nilai [3][4] = {
       {1, 2, 3, 4},
       {5, 6, 7, 8},
       {9, 10, 11, 12}
   };

    cout << "Outputnya adalah :"<< endl;

for (int i = 0; i < 3; i++){
    for (int j = 0; j < 4; j++){
        cout << nilai[i][j] << " ";
    }



    cout << endl;
}
}

#include <iostream>

using namespace std;

int main(){

    int nilai[5]={1,2,3,4,5};
    cout << nilai[0];
    cout << nilai[1];
    cout << nilai[2];
    cout << nilai[3];
    cout << nilai[4];


}





/*
#include <iostream>  // Include iostream for cout
using namespace std;  // Allows using cout without std::

int main() {
    // Declare array once
    int nilai[5] = {1, 2, 3, 4, 5};

    // Loop through the array and print values
    for (int i = 0; i < 5; i++) {
        cout << nilai[i] << endl;
    }

    return 0;  // Indicate successful program termination
}
*/







/*
#include <iostream>  // Include iostream for cout
using namespace std;  // Allows us to use cout without std::

int main() {
    // 2D array initialization
    int nilai[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Loop through the rows
    for (int i = 0; i < 3; i++) {
        // Loop through the columns
        for (int j = 0; j < 4; j++) {
            cout << nilai[i][j] << " ";  // Print the elements
        }
        cout << endl;  // New line after each row
    }

    return 0;  // Indicate successful program termination
}
*/









/*
#include <iostream>  // Include iostream for cout
using namespace std;

int main() {
    int x, y;
    int *px;

    x = 87;
    px = &x;

    y = *px;
    // Print the results
    cout << "Alamat x = " << &x << endl;
    cout << "Isi px = " << px << endl;
    cout << "Isi x = " << x << endl;
    cout << "Nilai yang ditunjuk px = " << *px << endl;
    cout << "Nilai y = " << y << endl;

    cin.get();
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int penjumlahan(int a, int b) {
    return a + b;
}

void greet(string name) {
    cout << "Hello " << name << "!" << endl;
}

int main() {
    int hasil = penjumlahan(5, 3);
    cout << "Hasil: " << hasil << endl;

    greet("ramdan");

    cin.get();

    return 0;
} */

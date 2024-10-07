#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    vector<int> arr(n); // Gunakan vector untuk array dinamis
    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\nData Array : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "\nNomor Genap  : ";
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 == 0)
            cout << arr[i] << ", ";

    cout << "\nNomor Ganjil : ";
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 != 0)
            cout << arr[i] << ", ";

    cout << endl;
    return 0;
}

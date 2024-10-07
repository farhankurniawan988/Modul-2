#include <iostream>
using namespace std;

int main()
{
    int x, y, z;

    // Input ukuran array
    cout << "Masukkan ukuran array 3D (x y z): ";
    cin >> x >> y >> z;

    // Alokasi memori untuk array 3D
    int ***arr = new int **[x];
    for (int i = 0; i < x; i++)
    {
        arr[i] = new int *[y];
        for (int j = 0; j < y; j++)
        {
            arr[i][j] = new int[z];
        }
    }

    // Input elemen array
    cout << "Masukkan elemen array:" << endl;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                cout << "arr[" << i << "][" << j << "][" << k << "] = ";
                cin >> arr[i][j][k];
            }
        }
    }

    // Menampilkan array
    cout << "\nArray yang diinput:" << endl;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // Dealokasi memori
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            delete[] arr[i][j];
        }
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}

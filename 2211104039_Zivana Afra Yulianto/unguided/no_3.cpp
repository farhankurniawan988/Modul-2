#include <iostream>
#include <vector>
#include <limits> // Untuk std::numeric_limits
using namespace std;

void findMax(const vector<int> &arr)
{
    int maxVal = numeric_limits<int>::min();
    for (int val : arr)
    {
        if (val > maxVal)
        {
            maxVal = val;
        }
    }
    cout << "Nilai Maksimum: " << maxVal << endl;
}

void findMin(const vector<int> &arr)
{
    int minVal = numeric_limits<int>::max();
    for (int val : arr)
    {
        if (val < minVal)
        {
            minVal = val;
        }
    }
    cout << "Nilai Minimum: " << minVal << endl;
}

void findAverage(const vector<int> &arr)
{
    double total = 0;
    for (int val : arr)
    {
        total += val;
    }
    double average = total / arr.size();
    cout << "Nilai Rata-rata: " << average << endl;
}

int main()
{
    int n;

    // Meminta pengguna memasukkan jumlah elemen
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    vector<int> arr(n); // Membuat vector dengan ukuran n

    // Meminta pengguna untuk memasukkan elemen array
    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Elemen [" << i << "]: ";
        cin >> arr[i];
    }

    int choice;
    do
    {
        // Menu pilihan
        cout << "\nMenu:\n";
        cout << "1. Cari Nilai Maksimum\n";
        cout << "2. Cari Nilai Minimum\n";
        cout << "3. Cari Nilai Rata-rata\n";
        cout << "4. Keluar\n";
        cout << "Pilih opsi (1-4): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            findMax(arr);
            break;
        case 2:
            findMin(arr);
            break;
        case 3:
            findAverage(arr);
            break;
        case 4:
            cout << "Keluar dari program." << endl;
            break;
        default:
            cout << "Pilihan tidak valid! Silakan pilih lagi." << endl;
        }
    } while (choice != 4);

    return 0;
}

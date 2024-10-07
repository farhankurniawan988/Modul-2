 #include <iostream>

using namespace std;

int main() {
    int n;

 cout << "Masukkan ukuran array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Masukkan nilai array ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];
    double sum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
        sum += arr[i];
    }

    double avg = sum / n;

    cout << "Nilai Maksimum: " << max << endl;
    cout << "Nilai Minimum: " << min << endl;
    cout << "Nilai Rata-rata: " << avg << endl;

    return 0;
}
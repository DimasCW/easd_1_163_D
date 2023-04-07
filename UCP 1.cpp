/**
1. Karena algoritma dibutuhkan untuk menyelesaikan masalah secara sistematis
2. Statis & Dinamis
3. membuat codingan yang tidak diperlukan
4. Menurut saya Insertion sort karena membandingkan dan memindahkan elemen ke posisi yang tepat didalam susunan data yang sudah diurutkan
5. Quadratic : Bubble Sort, Selection Sort, dan Insertion Sort
	Loglinear : Merge Sort dan Quick Sort
6. Selection sort: 
**/
#include<iostream>
using namespace std;



const int MAX_DATA = 2 * 15 + 10 + 20; // batas maksimum data

void input(int arr[], int n) {
    cout << "Masukkan " << n << " angka:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void selectionSort(int arr[], int n) {
    for (int FA = 0; FA <= n - 2; FA++) { // ubah j menjadi FA sesuai persyaratan
        int min_index = FA;
        for (int i = FA + 1; i < n; i++) {
            if (arr[i] < arr[min_index]) {
                min_index = i;
            }
        }
        swap(arr[FA], arr[min_index]);
    }
}

void display(int arr[], int n) {
    cout << "Data yang telah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[MAX_DATA];
    int n = 0;

    cout << "Masukkan jumlah data (maksimum " << MAX_DATA << "): ";
    cin >> n;

    input(arr, n);
    selectionSort(arr, n);
    display(arr, n);

    return 0;
}

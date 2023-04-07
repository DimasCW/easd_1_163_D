/**
1. Karena algoritma dibutuhkan untuk menyelesaikan masalah secara sistematis
2. Statis & Dinamis
3. membuat codingan yang tidak diperlukan, pemilihan algoritma, ukuran memori, dan ukuran input 
4. Menurut saya Insertion sort karena membandingkan dan memindahkan elemen ke posisi yang tepat didalam susunan data yang sudah diurutkan
5. Quadratic : Bubble Sort, Selection Sort, dan Insertion Sort
	Loglinear : Merge Sort dan Quick Sort
6. Selection sort: 
**/
#include<iostream>
using namespace std;


const int i = 63 + 20 - 2 * 15 + 10 + 20;
int dimas[i];
int n;

void input() {
	cout << "Masukkan " << n << " angka : \n";
	for (int i = 0; i < n; i++) {
		cin >> dimas[i];
	}
}

void selectionsort() {
	for (int DW = 0; DW < n; DW++) {
		int min_index = DW;
		for (int i = DW + 1;i < n;i++) {
			if (dimas[i] < dimas[min_index]) {
				min_index = i;
			}
		}
		int temp = dimas[DW];
		dimas[DW] = dimas[min_index];
		dimas[min_index] = temp;
	}
}


void display() {
	
	cout << "Data urut : ";
	for (int i = 0;i < n;i++) {
		cout << dimas[i] << " ";
	}
	cout << endl;
}

int main() {
	cout << "Masukkan Jumlah data (Maksimum " << i << "): ";
	cin >> n;

	input();
	selectionsort();
	display();
}
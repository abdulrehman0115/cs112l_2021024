#include<iostream>
using namespace std;
int main() {
	int r;
	cout << "Enter the size of array : ";
	cin >> r;
	int* a = new int[r];
	cout << "Enter the array : ";
	for (int i = 0; i < r; i++) {
		cin >> a[i];
	}
	int neg = 0;
	int pos = 0;
	for (int j = 0; j < r; j++) {
		if (a[j]<0) {
			neg++;
		}
		if(a[j] >= 0) {
			pos++;
		}
	}
	int static n = 0;
	int static p = 0;
	int* negative = new int[neg];
	int* positive = new int[pos];
	for (int j = 0; j < r; j++) {
		if (a[j]<0) {
			negative[n] = a[j];
			n++;
		}
		if (a[j] >= 0) {
			positive[p] = a[j];
			p++;
		}
	
	}
	int y = 0;
	for (int k = 0; k < pos; k++) {
		a[k] = positive[k];
		y++;
	}
	for (int c = y; c < r; c++) {
		a[c] = negative[c-y];
	}
	cout << "The array is : ";
	for (int t = 0; t < r; t++) {
		cout << a[t];
	}
	
}

#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter the size of array : ";
	cin >> n;
	int f = n;
	int * a = new int[n];
	cout << "Enter the array : ";
	for (int i = 0; i < n; i++) {
		
		cin >> a[i];
	}
	
	int* temp = new int[f];
	for (int k = 0; k < n; k++) {
		temp[k]= a[k + 1] - a[k];
	}
	cout << "The array is : ";
	for (int u = 0; u < n-1; u++) {
		cout << temp[u]<<" ";
	}
}
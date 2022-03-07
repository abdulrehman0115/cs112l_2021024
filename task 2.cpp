#include<iostream>
using namespace std;
int main() {
	int n, s=0;
	cout << "Enter the size of array : ";
	cin >> n;
	int* a = new int[n];
	cout << "Enter the array : ";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int l=a[0];
	for (int j = 0; j < n; j++) {
		if ( l < a[j]) {
			l = a[j];
		}
	}
	for (int k = 0; k < n; k++) {
		if (a[k] >= s && a[k] < l) {
			s = a[k];
		}
	}
	cout << "The second largest is : " << s << endl;
	//second smallest 
	int ss = l;
	int smallest = a[0];
	for (int j = 0; j < n; j++) {
		if (smallest > a[j]) {
			smallest = a[j];
		}
	}
	for (int k = 0; k < n; k++) {
		if (a[k] <= ss && a[k] > smallest) {
			ss = a[k];
		}
	}
	cout << "The second smallest is : " << ss;




}
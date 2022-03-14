#include<iostream>
using namespace std;
class parity {
private:
	int size;
	int* a = new int[size];
public:
	parity(int s) {
		size = s;
		
	}
	parity() {
		size = 0;
	}
	void put(int num) {
		int n = size;
		size = size + 1;
		int* temp = new int[size];
		for (int i = 0; i < n; i++) {
			temp[i] = a[i];
		}
		delete[]a;
		a = temp;
		a[n] = num;
	}
	void del() {
		int n = size;
		size = size - 1;
		int* temp = new int[size];
		for (int i = 0; i < n; i++) {
			temp[i] = a[i];
		}
		delete[]a;
		a = temp;
	}
	void print() {
		for (int i = 0; i < size; i++) {
			cout << a[i] << endl;
		}
	}
	int test() {
		if (size % 2 == 0) {
			return 1;
		}
		else
			return 0;
	}
};
int main() {
	parity p;
	int x;
	do {
		cout << "Press 1 : Put" << endl;
		cout << "Press 2 : Print" << endl;
		cout << "Press 3 : Delete" << endl;
		cout << "Press 4 : Test" << endl;
		cout << "Press 5 : Exist" << endl;
		cin >> x;
		switch (x) {
		case 1: {
			int num1;
			cout << "Enter number" << endl;
			cin >> num1;
			p.put(num1);
			break;
		}
		case 2:
			p.print();
			break;
		case 3: 
			p.del();
			break;
		case 4:
			cout << p.test();
			cout << endl;
			break;
		case 5:
			break;
		}
		
	} while (x != 5);
}

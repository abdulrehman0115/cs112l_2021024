#include<iostream>
using namespace std;
class matrix
{
public:
	int a[5][5];
	int arr[5][5];
	void initalize()
	{
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				cout << "Enter the row " << i << " colum " << j << ":";
				cin >> a[i][j];
			}
		}
	}
	void print()
	{

		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				cout << a[i][j]<<"\t";
			}
			cout << endl;
		}

	}
	void transpose() {
		cout << "The transpose of the matrix is" << endl;
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				arr[i][j] = a[j][i];
			}
		}
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				cout << arr[i][j] << "\t";
			}
			cout << endl;
		}
	}

	void issymmetry()
	{
		int b = 0;
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (arr[i][j] != a[i][j]) {
					b++;
				}
			}
		}
		if (b != 0) {
			cout << "The matrix is not symmetry";
		}
		else
			cout << "The matrix is  symmetry ";
		
	}
	void multiply(matrix obj1, matrix obj2) {
		int arr2[5][5] = { 0 };
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				for (int k = 0; k < 5; k++) {
					arr2[i][j] += obj1.a[i][j] * obj2.a[i][j];
				}
			}
		}
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				cout << arr2[i][j] << "\t";
				}
			cout << endl;
			}
		}
};

int main()
{
	int u;
	matrix a, b, c;
	cout << "Press 1 : For initalize " << endl;
	cout << "Press 2 : For Print Array " << endl;
	cout << "Press 3 : For Transpose " << endl;
	cout << "Press 4 : For Symmetry Array " << endl;
	cout << "Press 5 :  For Multiply Array " << endl;
	cout << "Press 6 : For exist " << endl;
	cout << "Press any number for process : ";
	cin >> u;
	while (1) {
		switch (u) {
		case 1: {
			c.initalize();
			break;
		}
		case 2: {
			c.print();
			break;
		}
		case 3: {
			c.transpose();
			break;
		}
		case 4: {
			c.issymmetry();
			break;
		}
		case 5:
			c.initalize();
			c.multiply(a, b);

		}
	}
} 
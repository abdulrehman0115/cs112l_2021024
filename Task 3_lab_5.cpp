#include<iostream>
#include<string>
using namespace std;
class stringtype {
private:
	string a;
	string b;
public:
	void setvalue(string str1, string str2) {
		a = str1;
		b = str2;
	}
	stringtype() {
		a = "a";
		b = "b";
	}
	void printvalue() {
		cout << "String 1 is : " << endl;
		cout << a << endl;
		cout << "String 2 is : " << endl;
		cout << b << endl;
	}
	int maxlength() {
		int size1 = 0;
		int size2 = 0;
		while (a[size1] != '/0') {
			size1++;
		}
		while (a[size2] != '/0') {
			size2++;
		}
		return size1 > size2 ? size1 : size2;

	}
	int campare(string s1, string s2) {
		int size1 = 0, size2 = 0;
		while (a[size1] != '/0') {
			size1++;

		}
		while (a[size2] != '/0') {
			size2++;
		}
		if (s1 > s2) {
			return 1;
			cout << "String 1 is greater than String 2" << endl;
		}
		if (s2 > s1) {
			return 1;
			cout << "String 2 is greater than string 1" << endl;
		}

		if (s1 == s2) {
			cout << "Both are equal";
		}

	}
	void concatenate(string s1, string s2) {
		string s3;
		s3 = s1 + s2;
		cout << s3;
	}
	void copy(string s1, string s2) {
		s1 = s2;
		cout << s1;

	}
};
int main() {
	stringtype s;
	string str0, str2;
	int x;
	cout << "Enter the string : ";
	getline(cin, str0);
	cout << "Enter the second string :";
	getline (cin,str2);
	do {

		cout << "Press 1 : For Set Value" << endl;
		cout << "Press 2 : For Print" << endl;
		cout << "Press 3 : For max length" << endl;
		cout << "Press 4 : For Campare Value" << endl;
		cout << "Press 5 : For Copy Value" << endl;
		cout << "Press 6 : For Concatenate Value" << endl;
		cout << "Press 7 : For Search Word" << endl;
		cout << "Press 8 : For Search Char" << endl;
		cout << "_____________Press any number for the function___________";
		cin >> x;
		switch (x) {
		case 1:
			s.setvalue(str0, str2);
			break;
		case 2:
			s.printvalue();
			break;
		case 3:
			s.maxlength();
			break;
		case 4:
			s.campare(str0, str2);
			break;
		case 5:
			s.copy(str0, str2);
			break;

		}







	} while (x != 9);
}
#include<iostream>
using namespace std;
class swaping
{public:
	int a, b;
	void setter()
	{
		cout << "Enter the number : ";
		cin >> a;
		cin >> b;
	}
	void swaped()
	{
		a = a * b;
		b = a / b;
		a = a / b;

	}
	void display()
	{
		cout << "A after swaping : " << a << endl;
		cout << "B after swaping : " << b << endl;
	}
};
int main() {
	swaping c1;
	c1.setter(); 
	c1.swaped();
     c1.display();
	return 0;
}
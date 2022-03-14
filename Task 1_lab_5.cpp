#include<iostream>
using namespace std;
class heater {
private:
	int temp;
public:
	heater() {
		temp = 15;
	}
	void print() {
		cout << temp;
	}
	void warmer() {
		temp = temp + 5;
		cout << temp;
	}
	void cooler() {
		temp = temp - 5;
		cout << temp;
	}
	~heater() {
		cout << "Destructor";
}
};
int main() {
	heater h;
	
	int x;
	
	
	do {
		cout << "Press 1 : For to check temperature" << endl;
		cout << "Press 2 : For to warmer" << endl;
		cout << "Press 3 : For to cooler" << endl;
		cout << "Press 4 : For exixt" << endl;
		cout << "____________Press any number for the function___________" << endl;
		cin >> x;
		switch (x) {
		case 1:
			cout << "Tempature is = ";
			h.print();
			break;
		case 2:
			cout << "Tempature is = ";
			h.warmer();
			break;
		case 3:
			cout << "Tempature is = ";
			h.cooler();
			break;
		case 4:
			h.~heater();
			break;
		}
		cout << endl;
	} while (x != 4);
	return 0;



	
}
#include<iostream>
#include<bitset>
using namespace std;
void binary(int y, int u ) {
	int n;
	n = y + u;
	bitset<8> a;
	a = bitset<8>(n);
	cout << "The sum is : " << a;

}
void octal_sum(int a, int b)
{
	int sum = 0, digit = 0, carry = 0, digit_rank = 1;

	
	while (a > 0 || b > 0 || carry)
	{
	
		digit = a % 10 + b % 10 + carry;

	
		if (digit > 7)
		{
			carry = 1;
			digit %= 8;
		}
		else
			carry = 0;

		
		sum += digit * digit_rank;
		digit_rank *= 10;


		a /= 10;
		b /= 10;
	}
	cout << "The sum is : " << sum;
}

void decimal(int c, int d) {
	int g;
	g = c + d;
	cout << "The sum is : " << g << endl;

}
void hexa(int a, int b)
{
	int sum = 0, digit = 0, carry = 0, digit_rank = 1;


	while (a > 0 || b > 0 || carry)
	{
		
		digit = a % 10 + b % 10 + carry;

		
		if (digit > 15)
		{
			carry = 1;
			digit %= 16;
		}
		else
			carry = 0;

		
		sum += digit * digit_rank;
		digit_rank *= 10;

		
		a /= 10;
		b /= 10;
	}
	cout << "The sum is : " << sum;
}
int main() {
	int x, y, z;
	cout << "Enter the base number : ";
	cin >> x;
	cout << "Enter the 1 number with base : ";
	cin >> y;
	cout << "Enter the 2 number with base : ";
	cin >> z;
	switch (x) {
		
	case 2:
	{
			binary(y, z);
			break;
	}
	case 8: {
			octal_sum(y, z);
			break;
	}
	case 10: {

		decimal(y, z);
		break;
	}
	case 16: {
		hexa(x, y);
		break;
	}

	}
}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, y = 0, s = 0, n = 0;
	cout << "This calculator checks if the number is pelindrome(a number which is equal when reversed)\n";
	cout << "Example 121 = 121 but 123 != 321 \nNow it's your turn\n";
	cout << "Enter the number: ";
	cin >> x;
	int z = x;
	int h = z;
	while(x > 0)
	{
		x = x / 10;
		n++;
	}
	int j = n - 1;
	while(z > 0)
	{
		int k = z % 10;
		y += k * (pow(10, j) / pow(10, s));
		z /= 10;
		s++;
	}

	if(h == y)
	{
		cout << h << " is pelindrome!\n" << endl;
	}
	else
	{
		cout << h << " is not pelindrome!\n" << endl;
	}
	return 0;
}

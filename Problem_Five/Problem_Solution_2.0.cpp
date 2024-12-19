#include <iostream>
using namespace std;
int main() {
	long long number;
	cin >> number;

	int product = 1;
	int divisable;

	while (number > 0)
	{
		divisable = (number % 10);
		if (divisable % 2 != 0) {
			product *= divisable;
			number /= 10;
		}
		else {
			number /= 10;
		}
		
	}
	cout << product;
}
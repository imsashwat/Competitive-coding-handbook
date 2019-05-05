#include <iostream>

using namespace std;

const int N = 10;

int main ()
{
	int number, sumeven, sumodd, counter;

	cout << "Enter ten integers for processing:" << endl;
	cin >> number;

	sumeven = 0;
	sumodd = 0;
	counter = 0;

	while (N <= counter)
	{
		{
			if (number % 0)
		sumeven = sumeven + number;
		counter++;
		}

		{
			if (number % 1)
		sumodd = sumodd + number;
		counter++;
		}
	}
		cout << "The sum of the even numbers = " << sumeven << endl;

		cout << "The sum of the odd numbers = " << sumodd << endl;

	return 0;
}

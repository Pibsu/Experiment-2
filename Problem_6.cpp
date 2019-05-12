#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int x, sum;
	
	x = 1;
	while (x != 0)
		{
			cout << "Please enter the number of whole numbers(n) to be taken sum from 1 to that number:\n";
			cout << "n = "; cin >> x;
			if (x >= 0)
			{
				sum = (x * (x + 1))/ 2;
				cout << "The sum of all numbers from 1 to " << x << " is equal to " << sum << ".\n";	
			}
			else
				break;
		}
	cout << "END.";	
	getch();
	return 0;
}

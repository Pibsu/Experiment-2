#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n, nextnum;
	int x = 0;
	int first = 0; 
	int second = 1;
	
	cout << "Enter how many fibonacci numbers should be displayed.\n";
	cout << "n = "; cin >> n;
	cout << "=====================\n"; cout << endl;
	cout << n << " Fibonacci numbers from 0:\n";
	
	x = 0;
	while (x < n + 2)
		{
			if (x <= 1)
				nextnum = x;	
			else
			{
				nextnum = first + second;
				first = second;
				second = nextnum;
			}
			cout << nextnum << ", ";
			x++;
		}
	getch();
	return 0;
}

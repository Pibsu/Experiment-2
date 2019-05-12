#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int x, y;
	double V;
	const double z = 2.5;
	cout << "Please enter 2 values.\n";
	cout << setw(10);
	cout << setprecision(2) << fixed << showpoint;
	cout << "x = "; cin >> x;
	cout << setw(10);
	cout << setprecision(2) << fixed << showpoint;
	cout << "y = "; cin >> y;
	cout << "====================\n";
	switch (x)
	{
		case 1:
			if (y > 1 && y < 5)
				{
					V = x * y * z;
					cout << setw(10);
					cout << setprecision(2) << fixed << showpoint;
					cout << "V = " << V << endl;
					break;
				}
			if (y >= 5)
				{
					V = x + (y / z);
					cout << setw(10);
					cout << setprecision(2) << fixed << showpoint;
					cout << "V = " << V << endl;
					break;
				}		
		case 2:
			if (y <= 5)
			{
				V = abs((x -y) / z);
				cout << setw(10);
				cout << setprecision(2) << fixed << showpoint;
				cout << "V = " << V << endl;
				break;
			}
			if (y > 5)
			{
				V = x - sqrt(y + z);
				cout << setw(10);
				cout << setprecision(2) << fixed << showpoint;
				cout << "V = " << V << endl;
				break;
			}
		default:
			{
				V = x + y + z;
				cout << setw(10);
				cout << setprecision(2) << fixed << showpoint;
				cout << "V = " << V << endl;
				break;
			}
	}
	getch();
	return 0;
}

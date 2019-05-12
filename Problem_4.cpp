#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	cout << "Let's count!\n";
	
	int x;
	for (x = 1; x < 10; x ++)
	{
		cout << x << ", ";
		continue;
	}
	for (x = 10; x <= 30; x +=2)
	{
		if (x == 30) 
			cout << x << " ";
		else
			cout << x << ", ";
		continue;
	}

	getch();
	return 0;
}

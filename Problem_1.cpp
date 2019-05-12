#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char plan;
	int hrs_use, extrahrs, extrahrdue, totaldue;
	
	const int planA = 995;
	const int planB = 1495;
	const int planC = 1995;
	
	cout << "Plans offered:\n";
	cout << "Plan A: P995/mo for 10 hrs of access. Additional hours are P20/hr.\n";
	cout << "Plan B: P1495/mo for 20 hrs of access. Additional hours are P10/hr. \n";
	cout << "Plan C: For P1995/mo of unlimited access.\n";
	cout << "========================================================================================================================\n";
	
	cout << "Please enter the letter of your chosen plan: "; cin >> plan;
	switch (plan)
	{
		case 'a':
		case 'A':
			cout << "Your chosen plan was P995/mo for 10 hrs of access.\n";
			cout << "Please enter the amount of hours you used our service in the month: "; cin >> hrs_use;
			if (hrs_use > 10)
			{
				extrahrs = hrs_use - 10;
				extrahrdue = extrahrs * 20;
				totaldue = planA + extrahrdue;
				cout << "Your total amount due for the month is P" << totaldue << endl;
			}
			else if (hrs_use <= 10)
				cout << "Your total amount due for the month is P" << planA << endl;
				cout << "Please settle your balance before next week or else your plan will be forfeited.";
			break;
		case 'b':
		case 'B':
			cout << "Your chosen plan was P1495/mo for 20 hrs of access.\n";
			cout << "Please enter the amount of hours you used our service in the month: "; cin >> hrs_use;
			if (hrs_use > 20)
			{
				extrahrs = hrs_use - 20;
				extrahrdue = extrahrs * 10;
				totaldue = planB + extrahrdue;
				cout << "Your total amount due for the month is P" << totaldue << endl;
			}
			else if (hrs_use <= 20)
				cout << "Your total amount due for the month is P" << planB << endl;
				cout << "Please settle your balance before next week or else your plan will be forfeited.";
			break;
		case 'c':
		case 'C':
			cout << "Your chosen plan was P1995/mo of unlimited access within the month.\n"
					"Your total amount due for the month is P" << planC << endl;
			cout << "Please settle your balance before next week or else your plan will be forfeited.";
			break;
		default:
			cout << "Please enter only from the plans offered. Please retry.";
	}
	getch();
	return 0;
}

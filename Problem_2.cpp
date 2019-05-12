#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double prevread, curread, consum, unpaidbal, curcharge, totbal, totunpaid;
	const double demcharge = 35;
	const double conscharge = 1.10;
	const double latecharge = 20;
	
	cout << "Please enter customer's previous reading: "; cin >> prevread;
	cout << "Please enter customer's current reading: "; cin >> curread;
	cout << "Please enter customer's unpaid balance for last month: "; cin >> unpaidbal;
	cout << "=========================================================\n";
	
	consum = abs(prevread - curread);
	cout << "Previous Reading: " << prevread << endl;
	cout << "Current Reading: " << curread << endl;
	cout << "Consumption: P"<< consum << endl;
	
	curcharge = demcharge + (consum * conscharge);
	cout << "Current Balance: P" << curcharge << endl;
	if (unpaidbal > 0)
		{
			cout << "Unpaid Balance: P" << unpaidbal << endl;
			cout << "Late Payment Charge: P" << latecharge << endl;
			totunpaid = unpaidbal + latecharge;
			totbal = curcharge + totunpaid;
			cout << "Total Balance: P" << totbal;
		}
	else
		{
			totbal = curcharge + unpaidbal;
			cout << "Total Balance: P" << totbal;	
		}
	getch();
	return 0;

}

	


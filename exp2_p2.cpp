#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	float a, b, balance;
	int response;
	
	cout << "Enter previous month's meter reading of water consumption (in gallons): ";
	cin >> a;
	cout << "Enter recent month's meter reading of water consumption (in gallons): ";
	cin >> b;
	cout << "Your meter reading is, in gallons: " << b-a << endl << endl; 
	cout << "Do you have any unpaid balance? (Enter 1 if Yes and 2 if No) ";
	cin >> response;
	
	if (response==2)
		cout << "Your total water bill is: Php " << ((b-a)*1.10+35);
	else if (response==1)
	{
		cout << "How much is your unpaid balance? : ";
		cin >> balance;
		cout << "Your total water bill is: Php " << ((b-a)*1.10)+(35+20+balance);
	}
	else 
		cout << "Your input is invalid." ;
	
	
	getch();
	return 0;	
}

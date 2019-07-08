#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int packA, packB, packC, hours;
	char package;
	
	packA = 995;
	packB = 1495;
	packC = 1995;
	
	cout << "Enter the package you purchased (A, B, C): ";
	cin >> package; 
	cout << "How long (hours) did you use the subscription package? : ";
	cin >> hours;
	
	switch (package)
	{
		case 'a':
		case 'A':
			if (hours<=10)
			{
				cout << "Your total monthly bill is: Php " << packA << endl;	
			}
			else
			{
				cout << "Your total monthly bill is: Php " << packA + ((hours-10)*20) << endl;
			}
			break;
			
		case 'b':
		case 'B':
			if (hours<=20)
			{
				cout << "Your total monthly bill is: Php " << packB << endl;
			}
			else
			{
				cout << "Your total monthly bill is: Php " << packB + ((hours-20)*10) << endl;
			}
			break;
			
		case 'c':
		case 'C':
			cout << "Your total monthly bill is: Php " << packC << endl;
			break;
			
		default:
			cout << "Your package is invalid." << endl;
		}
		
		
		getch();
		return 0;
	}

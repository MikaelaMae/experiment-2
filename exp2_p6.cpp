#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int x, sum;
	
	while (x>0)
	{
		cout << "Enter a number: ";
		cin >> x;
		
		if (x>0)
		{
			sum = (x*(x+1))/2;
			cout << "The sum of all whole numbers from 1 to " << x << " is " << sum << "." << endl << endl;
			continue;
		}
		else if (x<=0)
		{
			cout << "Thank you!" << endl;
		}
		else
		{
			cout << "Invalid Input." << endl;
		}

	}
	
	
	getch();
	return 0;
}

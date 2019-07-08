#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x, x1, x2, n;
	x1 = 0;
	x2 = 1;
	cout << "Fibonacci Numbers: " << endl;
	
	for (x=0; x<=21; x++)
	{
		if (x==0)
		{
			cout << x1 << ", ";
			continue;
		}
		if (x==1)
		{
			cout << x2 << ", ";
			continue;
		}
		
		n = x1 + x2;
		x1 = x2;
		x2 = n;
		
		cout << n << ", ";
	}
	
	getch();
	return 0;
}

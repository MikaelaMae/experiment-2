#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int c;
	cout << "Counting..." << endl;
	for (c=1; c<=30; c++)
	{
		if (c>10)
		{
			c=c+1;
			cout << c << ",";
		}
		else
		{
			cout << c << ",";
		}
	}
	
	
	getch();
	return 0;
}

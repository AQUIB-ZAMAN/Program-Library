/*
sine x plotter 
Input : a = starting angle in radians
		b = ending angle in radians
		s = step size for printing
		c = fill character for sine graph
*/
// header files for input/output, math functions and manipulators
#include <iomanip>
#include <math.h>
#include <iostream>
using namespace std;

int main()
{
	

	
	double a,b,s;
	char c;
	cout << "Enter the starting angle in radians :   " ; cin >> a;
	cout << "Enter the ending angle in radians :   " ; cin >> b;
	cout << "Enter the step length :   " ; cin >> s;
	cout << "Enter the fillcharacter : " ; cin >> c;

	for(double j=0;j<=110;j++)   cout<<'=';
    cout<<endl;

	for(double i=a;i<=b;i+=s)
	{
		int x = floor(cos(i*3.14/180)*50);
		
		if(x>=0)
		{
			cout <<setw(55) << setfill(' ') << "|" << setw(x) << setfill(c) << '+' << endl;
		}
		else
		{
			x=abs(x);
			cout <<setw(55-x) << setfill(' ') << '+' << setw(x) << setfill(c) << "|" << endl ;
		}
	}
	

}

/*Loop description :
	--first setw manages the leading spaces, explicitly screen is divided to 45
	--second setw manages the spaces filled by entered fillcharacter plotting the graph
	--after first setw,space is explicitly used to setfill because the next setfill encountered will fill any other space in the given line
*/
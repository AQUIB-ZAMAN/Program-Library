/*
Pyramid pattern
      *
     ***
    *****
   *******
Input : n = number of lines , c = fill character
*/
// header files for input/output and manipulators
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter number of lines : ";
	cin >> n;
	char c;
	cout << "Enter the fillchar of pattern : ";
	cin >> c;
	for (int i = 1 ; i <= n ; i++)
	{
		//cout << setw(n-i+1) << setfill(' ') << ' '<< setw(2*i) << setfill(c) << ' '<< endl ;
		cout << setw(n-i+1) << setfill(' ') << '+'<< setw(2*i)<< setfill('+')<<' '<<endl; //<< setw(2*i) << setfill(c) << ' '<< endl ;
	}
}
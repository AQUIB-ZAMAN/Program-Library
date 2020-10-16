#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n==1)
	{
		cout<<"NO";
		return 0;
	}
	if(n<=3)
	{
		cout<<"YES";
		return 0;
	}
	if(n%2==0||n%3==0)
	{
		cout<<"NO";
		return 0;
	}
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	//Checking a number is prime or not in O(sqrt(n))
}

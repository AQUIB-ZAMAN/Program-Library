#include<iostream>
using namespace std;

int binary_expo(int a,int b,int MOD)
{
	if(b==0)
	return 1;
	else if(b%2==0)
	return binary_expo((a%MOD*a%MOD)%MOD,b/2,MOD);
	else
	return (a*binary_expo((a%MOD*a%MOD)%MOD,b/2,MOD));
}
int main()
{
	int a,b,m;
	cin>>a>>b>>m;
	//To find (a^b)%m
	cout<<binary_expo(a,b,m);
}

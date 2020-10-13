#include<bits/stdc++.h>
using namespace std;
//Using extended euclid to find the solution for linear diophantine equation
int gcd;
int x,y;
void euclid(int a,int b)
{
    //a>=b
    //ax+by=gcd(a,b)
    if(b==0)
    {
        gcd=a;
        x=1,y=0;
        return;
    }
   euclid(a,a%b);
   int c=x;
   x=y;
   y=c-y*(a/b);
}
int main()
{
//ax+by=c;
int a,b,c;
cin>>a>>b>>c;
euclid(a,b);
if(c%gcd==0)
{
	//since we have found solution for ax+by=gcd(a,b)  therefore solution for ax+by=k*gcd(a,b) is k times {x,y} where {x,y} are solution of ax+by=gcd(a,b)
cout<<x*(c/gcd)<<" "<<y*(c/gcd);
}
else
cout<<"Solution exists";
}

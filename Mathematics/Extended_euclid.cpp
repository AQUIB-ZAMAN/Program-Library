#include<bits/stdc++.h>
using namespace std;
//Implementing extended euclid 
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
euclid(2,4);

cout<<x<<" "<<y;	
}

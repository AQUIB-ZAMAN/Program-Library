#include<bits/stdc++.h>
using namespace std;
const int N=(int)1e6;
int lpf[N+1];
//finding lowest prime factor
void p()
{
    for(int i=0;i<=N;i++)
    lpf[i]=i;
    for(int i=2;i*i<=N;i++)
    { 
        if(lpf[i]==i)
        {
            for(int j=2*i;j<=N;j+=i)
            if(lpf[j]==j)
            lpf[j]=i;
        }
    }
}
//factorizing every number from 1 to N in log(n)
mii mp[N+1];
void pf()
{
    for(int i=1;i<=N;i++)
    {
        int j=i;
        while(j!=1)
        {
            mp[i][lpf[j]]++;
            j/=lpf[j];
        }
    }
}
int main()
{
	p();
	pf();
	//This method is useful in case we need prime factorization of multiple numbers simultaneously
	//For example if we need to get number of factors of given n numbers less than or equal to 10^6
	//Per query of n numbers we have pre computed the prime factorization of all numbers.
	int n;
	for(auto &x:mp[n])
	{
		cout<<x.first<<" "<<x.second<<endl;
	}
}

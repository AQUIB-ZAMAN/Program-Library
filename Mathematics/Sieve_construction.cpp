#include<bits/stdc++.h>
using namespace std;
vector<int> prime;
void sieve(int n)
{
    vector<int> occ(n+1);
    occ[0]=1;
    occ[1]=1;
    for(int i=0;i*i<=n;i++)
    {
        if(!occ[i])
        {
            for(int j=i*i;j<=n;j+=i)
            occ[j]=1;
        }
    }
    for(int i=0;i<=n;i++)
    if(!occ[i])
    prime.push_back(i);
}
int main()
{
int n;
cin>>n;
//generating all primes less than or equal to n
sieve(n);
for(int i=0;i<prime.size();i++)
cout<<prime[i]<<endl;	
}

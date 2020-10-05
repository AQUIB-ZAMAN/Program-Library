#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a,n) a, a + n

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;


bool is_Sorted2(int a[], int size)
{
	if ( size == 0 || size == 1 )
	{
		return true;
	}
	bool is_Smaller_Sorted = (is_Sorted2( a + 1, size - 1 ));
	if (!is_Smaller_Sorted)
	{
		return false;
	}

	if (a[0] > a[1])
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool is_Sorted(int a[], int size)
{
	if ( size == 0 || size == 1 )
	{
		return true;
	}

	if ( a[0] > a[1] )
	{
		return false;
	}

	return (is_Sorted( a + 1, size - 1 ));
}


int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ; cout.tie(NULL) ;

	int t ;
	cin >> t ;

	while ( t-- )
	{
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		// cout << is_Sorted(arr, n) << endl;
		cout << is_Sorted2(arr, n) << endl;

	}

	return 0 ;

}
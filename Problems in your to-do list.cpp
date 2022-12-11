#include<iostream>
#define ll long long
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

void solve()
{
	ll n;
	cin >> n;
	vector<ll> v(n);
	for (ll i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	ll count = 0;
	for (ll i = 0; i < n; i++)
	{
		if (v[i] >= 1000)
			count++;
	}
	cout << count << "\n";
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}

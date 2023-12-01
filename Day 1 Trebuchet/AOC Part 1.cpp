#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(A) A.begin(),A.end()
#define coutyes cout << "YES" << endl
#define coutno cout << "NO" << endl



int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	//It's all about giving your best efforts and having fun on the way.
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	ll y = 0;
	for (int ii = 0; ii < tt; ii++) {
		string s;
		cin >> s;
		ll u = 0;
		ll x = 0;
		ll k = -1;
		for (int j = 0; j < s.size(); j++) 
		{
			if (s[j] - '0' >= 0 && s[j] - '0' <= 9) {
				if (k == -1)
				{	u += 10 * (s[j] - '0');
					k = 0;
					
				}
				x = s[j] - '0';

			}
		}

		y += (u + x);
      }
	cout << y << endl;
}
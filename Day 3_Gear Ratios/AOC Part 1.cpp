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
#define n 140


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
	for (int ii = 0; ii < tt; ii++) {
		ll ans = 0;
		char s[n][n];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> s[i][j];
			}
			
			
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (s[i][j] != '.' && (s[i][j] < '0' || s[i][j] > '9') && (s[i][j] < 'a' || s[i][j] > 'z')) {
                    //cout<<s[i][j]<<" "<<i<<" "<<j<<" "<<endl;
					for (int a = -1; a <= 1; a++) {
						for (int b = -1; b <= 1; b++) {
							int nr = i + a, nc = j + b;
							if (nr >= 0 && nr < n && nc >= 0 && nc < n) {

								if (s[nr][nc] >= '0' && s[nr][nc] <= '9') {
									s[nr][nc] += 49;

								}

							}
						}
					}



				}
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if ((s[i][j] >= '0' && s[i][j] <= '9') || (s[i][j] >= 'a' && s[i][j] <= 'z') ) {
					string s2;
					bool k = false;
					while (j < n && ((s[i][j] >= '0' && s[i][j] <= '9') || (s[i][j] >= 'a' && s[i][j] <= 'z'))) {
						if (s[i][j] >= 'a' && s[i][j] <= 'z') {s[i][j] -= 49; k = true;}
						s2.pb(s[i][j]);
						j++;
					}
					if (k) ans += stoi(s2);
				}
			}
		}
		cout << ans << endl;






	}

}
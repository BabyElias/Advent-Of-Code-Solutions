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
				if (s[i][j] == '*') {
                    //cout<<s[i][j]<<" "<<i<<" "<<j<<" "<<endl;
                    int count=0;
                    ll x=1;
					for (int a = -1; a <= 1; a++) {
						for (int b = -1; b <= 1; b++) {
							int nr = i + a, nc = j + b;
							if (nr >= 0 && nr < n && nc >= 0 && nc < n) {
								if (s[nr][nc] >= '0' && s[nr][nc] <= '9') {
									string s1,s2,s3;
									int v=nc;
									while(v>=0 && (s[nr][v] >= '0' && s[nr][v] <= '9')){
                                         s1.pb(s[nr][v]);
                                         if(v!=nc) s[nr][v]='a';
                                         v--;

									}
									int w=nc;
									while(w<n && (s[nr][w] >= '0' && s[nr][w] <= '9')){
                                         s2.pb(s[nr][w]);
                                         s[nr][w]='a';
                                         w++;

									}
									
									reverse(all(s1));
									s1.pop_back();
									s3=s1+s2;
                                    int h=stoi(s3);
                                    x*=h;
									count++;

								}
                             

							}
						}
					}
					if(count==2) ans+=x;



				}
			}
		}

	
		cout << ans << endl;

	}

}
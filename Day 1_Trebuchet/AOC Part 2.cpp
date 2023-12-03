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

pair<int,int> checknum(string &s,int t){
	pair<int,int> ans={-1,-1}; //int->size of string, int->numeric
	if(s[t]=='o'){
		if(s.substr(t,3)=="one"){
			ans={3,1};

		}
	}
	else if(s[t]=='t'){
		if(s.substr(t,3)=="two"){
			ans={3,2};

		}
		if(s.substr(t,5)=="three"){
			ans={5,3};

		}
	}
	else if(s[t]=='f'){
		if(s.substr(t,4)=="four"){
			ans={4,4};

		}
		if(s.substr(t,4)=="five"){
			ans={4,5};

		}
	}
	else if(s[t]=='s'){
		if(s.substr(t,3)=="six"){
			ans={3,6};

		}
		if(s.substr(t,5)=="seven"){
			ans={5,7};

		}
	}
	else if(s[t]=='e'){
		if(s.substr(t,5)=="eight"){
			ans={5,8};

		}
	}
	else if(s[t]=='n'){
		if(s.substr(t,4)=="nine"){
			ans={4,9};

		}
	}
	
	return ans;

}



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
			if(s[j]-'0'>=0 && s[j]-'0'<=9){
				if(k==-1){
					u+=(10*(s[j]-'0'));
					k=0;

				}
				x=s[j]-'0';
			}
			else{

				auto y=checknum(s,j);
				if(y.F!=-1){
					if(k==-1) {u+=(10*y.S); k=0;}
					x=y.S;
					
				}
			}
		}
		cout<<u+x<<endl;

		y += (u + x);
      }
	cout << y << endl;
}
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
	cin.ignore();
	ll ans=1;
	for (int ii = 0; ii < tt; ii++) 
	{
		string a,b;
        getline(cin,a);
        getline(cin,b);
        bool k1=false,k2=false;
        vector<int> v1,v2;
        for(int j=0;j<a.size();j++){
        	if(a[j]==':') k1=true;
        	else if(k1==false || isspace(a[j])) continue;
        	else{
        		string st;
        		while(j<a.size() && !isspace(a[j])){
        			st.pb(a[j]);
        			j++;
        		}
        		int y=stoi(st);
        		v1.pb(y);
        	}
        }
         for(int j=0;j<b.size();j++){
        	if(b[j]==':') k2=true;
        	else if(k2==false || isspace(b[j])) continue;
        	else{
        		string st;
        		while(j<b.size() && !isspace(b[j])){
        			st.pb(b[j]);
        			j++;
        		}
        		int y=stoi(st);
        		v2.pb(y);
        	}
        }
        
        for(int j=0;j<v1.size();j++){
        	ll w=0;
        	int time=v1[j];
        	int dist=v2[j];
        	for(int q=0;q<=time;q++){
        		if((time-q)*(q)>dist) w++;
        	}
        	ans*=w;
        }
        cout<<ans<<endl;
    }
}
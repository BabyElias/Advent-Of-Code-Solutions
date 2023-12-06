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
	for (int ii = 0; ii < tt; ii++) 
	{
		string a,b;
        getline(cin,a);
        getline(cin,b);
        bool k1=false,k2=false;
        ll time,distance;
        for(int j=0;j<a.size();j++){
        	if(a[j]==':') {k1=true; continue;}
        	if(k1){
        		string st;
        		while(j<a.size()){
        			if(isspace(a[j])) {j++;continue;}
        			else st.pb(a[j]);
        			
        			j++;
        		}
        		time=stoll(st);
        	}
        	
        }
        for(int j=0;j<b.size();j++){
        	if(b[j]==':') {k2=true; continue;}
        	if(k2){
        		string st;
        		while(j<b.size()){
        			if(isspace(b[j])) {j++;continue;}
        			else st.pb(b[j]);
        			
        			j++;
        		}
        		distance=stoll(st);
        	}
        	
        }
        ll w=0;
        for(int q=0;q<=time;q++){
        		if((time-q)*(q)>distance) w++;
        	}
        	
        
        cout<<w<<endl;
    }
}
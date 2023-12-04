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
	ll ans=0;
	vector<int> freq(tt,1);
	for (int ii = 0; ii < tt; ii++) {
		string input;
        getline(cin,input);
        regex re("[:]");
        bool k=false;
        ll x=0;
        sregex_token_iterator first{input.begin(), input.end(), re, -1}, last;//the '-1' is what makes the regex split (-1 := what was not matched)
        vector<string> tokens{first, last};
        unordered_map<int,int> m;
        for(int j=0;j<tokens[1].size();j++){
        	if(isspace(tokens[1][j])) continue;
        	else{
        		if(tokens[1][j]=='|') k=true;
        		else{
        			string s;
        			while(!isspace(tokens[1][j])){
        				s.pb(tokens[1][j]);
        				j++;
        			}
        			int y=stoi(s);
        			if(!k) m[y]++;
        			else{
                      if(m[y]!=0) x++;
        			}
        		}
        	}
        }
        
        for(int j=ii+1;j<min(ii+x+1,(ll)tt);j++) freq[j]+=(freq[ii]);
        
    }
    
    cout<<accumulate(all(freq),ans)<<endl;

}
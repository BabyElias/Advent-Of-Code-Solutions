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
	int q=0;
	cin.ignore();
	for (int ii = 0; ii < tt; ii++) {
		string input;
		getline(cin,input);
        regex re("[:,;]");
        sregex_token_iterator first{input.begin(), input.end(), re, -1}, last;//the '-1' is what makes the regex split (-1 := what was not matched)
        vector<string> tokens{first, last};
        
        string r=tokens[0].substr(5);
        int f=stoi(r);
        //cout<<f<<endl;
        ll power=1;
        int rr=0,g=0,b=0;
        for(int j=1;j<tokens.size();j++){
        	string st=tokens[j];
        	string s2=st.substr(1,2);
        	string s3=st.substr(3);
        	char c;
        	if(isspace(s3[0])) c=s3[1];
        	else c=s3[0];
        	//cout<<c<<" ";
        	int m=stoi(s2);
        	//cout<<m<<endl;
        	if(c=='b'){
        		b=max(b,m);
        	}
        	if(c=='g'){
        		g=max(g,m);
        	}
        	if(c=='r'){
        		rr=max(rr,m);
        	}

        }
        power*=(rr*g*b);
        q+=power;
        

        }
        cout<<q<<endl;
        
}
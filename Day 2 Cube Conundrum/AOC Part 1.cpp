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
	int x=12,y=13,z=14;
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
        bool k=true;
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
        		if(m>z) k=false; 
        	}
        	if(c=='g'){
        		if(m>y) k=false;
        	}
        	if(c=='r'){
        		if(m>x) k=false;
        	}

        }
        if(k) q+=f;
        

        }
        cout<<q<<endl;
}
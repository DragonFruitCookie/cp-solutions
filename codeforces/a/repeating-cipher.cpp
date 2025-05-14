#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	string s; cin>>s;
	int a=1;
	string res;
	for(int i=0; i<s.size(); i+=a){
	    res.push_back(s[i]); a++;
	}
	cout<<res<<endl;
	return 0;
}

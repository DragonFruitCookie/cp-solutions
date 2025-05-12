#include <bits/stdc++.h>
using namespace std;

int main() {
	map<char, int> mp={{'T', 4},{'C', 6},{'O', 8},{'D', 12},{'I', 20}};
	int t;
	cin>>t;
	int ans=0;
	while(t--){
	    string c; cin>>c;
	    ans+=mp[c[0]];
	}
	cout<<ans<<endl;
	return 0;
}

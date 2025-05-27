#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n; cin>>n;
	    string s; cin>>s;
	    int one=0;
	    for(int i=0; i<n; i++){
	        if(s[i]=='1') one++;
	    }
	    cout<<one*(n-1)+(n-one);
	    cout<<endl;
	}
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n, a, b, c;
	    cin>>a>>b>>c>>n;
	    if((3*max(a,max(b,c))-(a+b+c)) > n) cout<<"NO"<<endl;
	    else {
	        n-=3*max(a,max(b,c))-(a+b+c);
	        if(n%3==0) cout<<"YES"<<endl;
	        else cout<<"NO"<<endl;
	    }
	}
	return 0;
}

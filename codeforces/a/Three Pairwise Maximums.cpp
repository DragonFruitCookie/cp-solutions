#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int a, b, c;
	    cin>>a>>b>>c;
	    if(max(a,b) == max(a,c) && max(a,b)==max(b,c)) {
	        cout<<"YES"<<endl;
	        cout<<min(a,min(b,c))<<" "<<min(a,min(b,c))<<" "<<max(a,b)<<endl;
	    }
	    else cout<<"NO"<<endl;
	}
	return 0;
}

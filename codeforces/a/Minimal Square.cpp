#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int a, b;
	    cin>>a>>b;
	    if(a>b) b*=2;
	    else a*=2;
	    cout<< max(a, b)*max(a,b)<<endl;
	}
}

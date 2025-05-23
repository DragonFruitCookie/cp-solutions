#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int e=0, o=0;
	    int n; cin>>n;
	    for(int i=0; i<n; i++){
	        int a; cin>>a;
	        if(a%2==0) e++;
	        else o++;
	    }
	    
	    if(o!=0){
	        if(e!=0 || n%2!=0) cout<<"YES"<<endl;
	        else cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}

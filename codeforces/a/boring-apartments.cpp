#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string num; cin>>num;
	    int n=num.size();
	    int res;
	    if(n==1) res=1;
	    else if(n==2) res=3;
	    else if(n==3) res=6;
	    else res=10;
	    
	    res+= (int(num[0]-48)-1)*10;
	    cout<<res<<endl;
	}
	return 0;
}

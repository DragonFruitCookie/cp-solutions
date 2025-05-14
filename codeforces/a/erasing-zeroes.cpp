#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s; cin>>s;
	    int ind=-1;
	    
	    for(int i=0; i<s.size(); i++){
	        if(s[i]=='1') {
	            ind = i;
	            break;
	        }
	    }
	    
	    
	    
	    if(ind!=-1){
	       int cnt=0, res=0;
	       for(int i=ind+1;i<s.size(); i++){
	           if(s[i]=='0') cnt++;
	           else{
	               res+=cnt; cnt=0;
	           }
	       }
	       cout<<res<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}



#include <bits/stdc++.h>
using namespace std;

int main() {
	string t;
	cin>>t;
	int cnt=0;
	for(auto c: t){
	    if(c=='4' || c=='7') cnt++;
	}
	
	if(cnt==0) {
	    cout<<"NO"; return 0;
	}
	while(cnt>0){
	    int a = cnt%10;
	    if(a!=4 && a!=7) {
	        cout<<"NO";
	        return 0;
	    }
	    cnt/=10;
	}
	cout<<"YES";
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int maxi=INT_MIN, mini=INT_MAX;
	int k = -1, j=-1;
	for(int i=0; i<t; i++){
	    int n;
	    cin>>n;
	    if(n>maxi){
	        maxi=n;
	        k=i;
	    }
	    if(n<=mini){
	        mini=n;
	        j=i;
	    }
	}
	
	int ans = k + (t-1-j);
	if(j<k) ans-=1;
	cout<<ans<<endl;
	return 0;
}

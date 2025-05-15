#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int a, b;
	int curr=0, maxi=0;
	while(t--){
	    cin>>a>>b;
	    curr-=a; curr+=b;
	    maxi=max(curr, maxi);
	}
	cout<<maxi<<endl;
	return 0;
}

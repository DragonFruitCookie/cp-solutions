#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, d;
	cin>>a>>b>>c>>d;
	int maxi = max(max(a,b), max(c,d));
	if(maxi-a!=0) cout<<maxi-a<<" "; 
	if(maxi-b!=0) cout<<maxi-b<<" ";
	if(maxi-c!=0) cout<<maxi-c<<" ";
	if(maxi-d!=0) cout<<maxi-d<<" ";
	cout<<endl;
}

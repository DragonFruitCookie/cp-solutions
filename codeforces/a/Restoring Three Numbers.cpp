#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, d;
	cin>>a>>b>>c>>d;
	int maxi = max(max(a,b), max(c,d));
	if(maxi!=a) cout<<maxi-a<<" "; 
	if(maxi!=b) cout<<maxi-b<<" ";
	if(maxi!=c) cout<<maxi-c<<" ";
	if(maxi!=d) cout<<maxi-d<<" ";
	cout<<endl;
}

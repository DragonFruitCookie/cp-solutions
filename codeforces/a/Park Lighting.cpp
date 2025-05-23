#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int lights=0;
	    lights+=(n/2)*m;
	    lights+=((n%2)*ceil(m/2.0));
	    cout<<lights<<endl;
	}
	return 0;
}

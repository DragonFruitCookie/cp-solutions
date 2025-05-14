#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int lv=0, c=1;
	while(t>=c){
	    t-=c;
	    lv++; c=c+lv+1;
	}
	cout<<lv<<endl;
	return 0;
}

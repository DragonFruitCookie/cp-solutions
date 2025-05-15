#include <bits/stdc++.h>
using namespace std;

int main() {
	int pages; cin>>pages;
	vector<int> v;
	for(int i=0; i<7; i++){
	    int t; cin>>t;
	    v.push_back(t);
	}
	int i=0;
	while(pages>0){
	    pages-=v[i]; 
	    i++; i=i%7;
	}
	if(i==0) i=7;
	cout<<i<<endl;
	
	return 0;
}

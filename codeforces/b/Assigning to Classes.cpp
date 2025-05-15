#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n; cin>>n;
	    vector<int> a;
	    
	    for(int i=0; i<2*n; i++){
	        int temp; cin>>temp;
	        a.push_back(temp);
      }
	    sort(a.begin(), a.end());
	    cout<<a[n]-a[n-1]<<endl;
	}
	
	return 0;

}

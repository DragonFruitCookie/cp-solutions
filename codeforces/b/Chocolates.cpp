#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	
	int m = arr[n-1];
	int a=arr[n-1];
	for(int j=n-2; j>=0; j--){
	    m=min(arr[j], m-1);
	    if(m<=0) break;
	    a+=m;
	}
	cout<<a<<endl;
	return 0;
}

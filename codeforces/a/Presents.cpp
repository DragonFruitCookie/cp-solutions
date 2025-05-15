#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int arr[t]={0};
	for(int i=0; i<t; i++){
	    int n;
	    cin>>n;
	    arr[n-1]=i+1;
	}
	for(auto c:arr){
	    cout<<c<<' ';
	}
}

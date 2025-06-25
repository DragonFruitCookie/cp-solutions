#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int wr=0, o=0;
	    for(int i=0; i<n; i++){
	        int a; cin>>a;
	        if(i%2==0){
	            if(a%2!=0){
	                wr++;
	            }
	        }else{
	            if(a%2==0){
	                wr++;
	                o++;
	            }
	        }
	    }
	    if(wr%2==0 && wr/2==o){
	        cout<<o<<endl;
	    }else{
	        cout<<-1<<endl;
	    }
	}
}

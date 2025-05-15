#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin>>n>>m;
	int st=0;
	
	if(m%n==0){
	    m=m/n;
	    while(m%3==0){
	        m/=3; st++;
	    }
	    while(m%2==0){
	        m/=2; st++;
	    }
	    
	    if(m==1) cout<<st;
	    else cout<<-1;
	}
	else{
	    cout<<-1;
	}
	
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin>>s;
	for(int i=1; i<s.size(); i++){
	    if(islower(s[i])){
	        cout<<s;
	        return 0;
	    }
	}
	
	for(int j = 0; j < s.length(); j++) {
	    char u;
        if(islower(s[j]))
            u=toupper(s[j]);
        else
            u=tolower(s[j]);
        cout<<u;
    }
    
    return 0;
}

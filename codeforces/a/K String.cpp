#include <bits/stdc++.h>
using namespace std;

int main() {
	int k; cin>>k;
	string s; cin>>s;
	sort(s.begin(), s.end());
	string res;
	char ch; int cnt=0;
	
	for(int i=0; i<s.size(); i++){
	    if(i%k==0) {
	        ch=s[i];
	        res+=ch;
	    }
	    if(s[i]==ch){
	        cnt++;
	    }
	}
	
	if(cnt==s.size() && cnt%k==0){
	    for(int i = 0; i < k; i++) {
            for(int l = 0; l < s.size(); l += k) {
                cout << s[l];
            }
        }
	}
	else cout<<-1;
	
	return 0;
}

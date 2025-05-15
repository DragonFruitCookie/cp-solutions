#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string num;
	    cin>>num;
	    cout<<num.size()-count(num.begin(), num.end(), '0')<<endl;
	    int cnt=0;
        for(int i=num.size()-1; i>=0; i--){
            if(num[i]!='0'){
                cout<<num[i]+ string(cnt,'0')<<' ';
            }
            cnt++;
        }
        cout<<endl;
	}
	return 0;
}

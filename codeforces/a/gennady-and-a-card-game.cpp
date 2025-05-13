#include<bits/stdc++.h>
using namespace std;

int main(){
    string st;
    cin>>st;
    int t=5;
    while(t--){
        string hd; cin>>hd;
        if(hd[0]==st[0] || hd[1]==st[1]) {
            cout<<"YES"; return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
    
}

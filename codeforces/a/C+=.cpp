#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int a, b, n;
        cin>>a>>b>>n;
        int st=0;
        while(a<=n && b<=n){
            if(a>b) b+=a;
            else a+=b;
            st++;
        }
        cout<<st<<endl;
    }
     return 0;
}

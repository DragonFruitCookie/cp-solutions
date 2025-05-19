#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        long long a, b, c;
        cin>>a>>b>>c;
        
        //cheaper in the first:
        if(a<c) cout<<1<<" ";
        else cout<<-1<<" ";
        
        //cheaper in second:
        if(b*a>c) cout<<b<<endl;
        else cout<<-1<<endl;
    }
}

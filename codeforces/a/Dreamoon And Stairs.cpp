#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    int st=0, ans=-1;
    //least steps:
    if(n%2==0) {
        st=n/2;
        n=n/2;
    }
    else {
        st=1+n/2;
        n=n/2;
    }
    
    while(n>=0){
        n--;
        if(st%m==0){
            ans=st;
            break;
        }
        st++;
    }
    cout<<ans;
    return 0;
}

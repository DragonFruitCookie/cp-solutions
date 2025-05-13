#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    int curr, last=0, len=0, maxi=0;
    while(t--){
        cin>>curr;
        if(curr>last){
            len++;
        }
        else{
            maxi=max(maxi, len);
            len=1;
        }
        last=curr;
    }
    maxi=max(maxi, len);
    cout<< maxi<<endl;
    return 0;
}

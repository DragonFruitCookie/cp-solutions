#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    int sum=t;
    int k=1;
    while(--t){
        sum=sum+t*k;
        k++;
    }
    cout<<sum<<endl;
    return 0;
}

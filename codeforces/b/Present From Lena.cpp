#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    n=n*2+1;
    int k;
    for(int i=0; i<n; i++){
        if(i<=(n-1)/2) k=i+1;
        else k=n-i;
        int p=-1;
        
        //left
        for(int j=0; j<(n-(k*2-1))/2; j++){
            cout<<"  ";
        }
        
        //mid
        for(int j=0; j<(2*k-1); j++){
            if(j!=0) cout<<" ";
            if(j<k) p++;
            else p--;
            cout<<p; 
        }
        
        cout<<endl;
    }
}

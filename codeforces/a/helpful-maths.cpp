#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int one=0, two=0;
    for(auto c:s){
        if(c=='1') one++;
        else if(c=='2') two++;
    }
    
    for(int i=0; i<s.size(); i+=2){
        if(one>0) {
          s[i]='1'; 
          one--;
        }
        else if(two>0) {
          s[i]='2'; 
          two--;
        }
        else s[i]='3';
    }
    cout<<s<<endl;
    return 0;
}

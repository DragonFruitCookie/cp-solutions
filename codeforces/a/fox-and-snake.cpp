#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin>>a>>b;
	int c=0;
	for(int i=0; i<a; i++){
	    if(i%2==0){
	        cout<<string(b, '#')<<endl;
	    }
	    else{
	        if(c%2==0){
	            cout<<string(b-1, '.')<<'#'<<endl;
	        }
	        else{
	            cout<<'#'<<string(b-1, '.')<<endl;
	        }
	        c=1-c;
	    }
	}
	return 0;
}

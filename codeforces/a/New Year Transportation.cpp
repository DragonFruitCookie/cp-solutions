#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, e;
	cin>>n>>e;
	int a[n];
	
    for(int i = 0; i < n; i++) cin >> a[i];

    int p=0;
    while(p < e - 1) p += a[p];

    if(p == e - 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

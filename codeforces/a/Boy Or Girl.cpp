#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    bitset<26> freq; // 26 bits for 26 lowercase letters
    for (char c : s) {
        freq[c - 'a'] = 1;
    }
    cout << (freq.count() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
    return 0;
}

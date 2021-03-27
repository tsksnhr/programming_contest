#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    string S;
    cin >> S;

    char ch = S.at(0);
    string ans;
    for (ll i = 1; i < S.size(); i++) ans += S.at(i);
    ans += ch;

    cout << ans << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    string S;
    cin >> S;

    ll ans = 0;
    ll tmp = 0;
    for (ll i = 0; i < S.size(); i++){
        char ch = S.at(i);
        bool is_AGCT = false;
        
        if ((ch == 'A') || (ch == 'G') || (ch == 'C') || (ch == 'T')) is_AGCT = true;
        if (is_AGCT) tmp++;
        else tmp = 0;
        
        ans = max(ans, tmp);
    }

    cout << ans << endl;
    return 0;
}
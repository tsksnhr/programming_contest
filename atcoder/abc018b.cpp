#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    string S;
    cin >> S;
    ll N; 
    cin >> N;

    string ans = S;
    string buf = "";
    for (ll i = 0; i < N; i++){
        ll l, r;
        cin >> l >> r;
        l--;
        r--;
//        cout << l << " " << r << endl;

        for (ll i = 0; i < l; i++){
            buf += ans.at(i);
//            cerr << i << " " << buf << endl;
        }
        for (ll i = r; i >= l; i--){
            buf += ans.at(i);
//            cerr << i << " " << buf << endl;
        }
        for (ll i = r+1; i < S.size(); i++){
            buf += ans.at(i);
//            cerr << i << " " << buf << endl;
        }
        ans = buf;
//        cerr << ans << " " << buf << endl;
        buf = "";
    }

    cout << ans << endl;
    return 0;
}
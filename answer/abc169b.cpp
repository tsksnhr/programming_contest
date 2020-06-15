#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;

int main(){
    
    ll n;
    cin >> n;
    ll ans = 1;
    vector<ll> a(n);
    for (int i=0; i<n; i++){
        cin >> a.at(i);

        if (a.at(i) == 0LL){
            cout << 0 << endl;
            return 0;
        }
    }

    for (int i=0; i<n; i++){
        ll ans_buf;
        ans_buf = ans;
        ans = ans_buf*(a.at(i));

        if (ans > INF){
            cout << -1 << endl;
            return 0;
        }
        //  オーバーフローだああああああ！！！！！
        if (ans < ans_buf){
            cout << -1 << endl;
            return 0;
        }
    }

    cout << ans << endl;
    return 0;
}

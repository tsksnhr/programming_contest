#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll N;
    cin >> N;

    ll buf = N;
    map<ll, ll> divisor;
    ll div = 2;
    ll thr = sqrt(N);
    bool flg = false;

    // 素因数分解
    if (buf == 1) {
        cout << 0 << endl;
        return 0;
    }
    else {
        for (div=2; div<thr+1; div++){
            while (buf%div == 0){
                buf /= div;
                divisor[div]++;
                flg = true;
            }
        }

        if (buf != 1) {
            divisor[N]++;
        }
    }

    // 次数をカウント
    ll ans = 0;
    for (auto p: divisor){
        auto value = p.second;

        int sub = 1;
        while (value - sub >= 0){
            value -= sub;
            sub++;
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int ruijo(int a, int b);
ll ruijo(ll a, ll b);

int main(){

    ll N;
    cin >> N;
    vector<ll> A;
    map<ll, ll> dict_A;

    for (ll i=0; i<N; i++){
        ll temp;
        cin >> temp;
        dict_A[temp]++;
    }

    ll ans = 0;

    for (auto p: dict_A){

        auto key = p.first;
        auto value = p.second;
        ll buf = key;

        if (value != 1) continue;

        ll div = 2;
        ll thr = sqrt(buf);
        map<ll, ll> divisor;

        // 素因数分解
        if (buf == 1) {
            ans++;
            continue;
        }
        else {
            for (div=2; div<thr+1; div++){
                while (buf%div == 0){
                    buf /= div;
                    divisor[div]++;
                }
            }
            // flgをチェックする方法の場合、N=2*xxといった形だと素因数の数え漏れが発生する
            if (buf != 1) {
                divisor[buf]++;
            }
        }

        bool flg = true;
        for (auto q: divisor){
            auto qkey = q.first;
            auto qvalue = q.second;

            for (ll i=1; i<=qvalue; i++){
                if (dict_A.count(ruijo(qkey, i))){
                    if (ruijo(qkey, i) == key) continue;
                    else {
                        flg = false;
                        break;
                    }
                }
            }
            if (flg == false) break;
        }
        if (flg) ans++;
    }

    cout << ans << endl;
    return 0;
}

int ruijo(int a, int b){

    if (b == 0) return 1;

    return a*ruijo(a, b-1);
}
ll ruijo(ll a, ll b){

    if (b == 0) return 1;

    return a*ruijo(a, b-1);
}
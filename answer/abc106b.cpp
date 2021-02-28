//  素因数分解ではなく、与えられた数字を1から除算して、余りが0になる値をカウントすれば同じことできる(こっちのが簡単)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;

    ll ans = 0;
    ll cnt = 0;
    for (ll i = 1; i <= N; i++){
        if (i%2 == 0) continue;

        for (ll j = 1; j <= i; j++){
            ll mod = i%j;
            if (mod == 0) cnt++;
        }
        if (cnt == 8) ans++;
        cnt = 0;
    }

    cout << ans << endl;
    return 0;
}
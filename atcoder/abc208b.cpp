// Factorial Yen Coin

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll MOD = 1e9 + 7;
const ll INF = 1LL << 60;

int factrial(int x){

    if (x == 0) return 1;
    
    int ret = 1;
    for (int i = 1; i <= x; i++){
        ret *= i;
    }

    return ret;
}

int main(){

    int P;
    cin >> P;

    int cnt = 0;
    for (int i = 0; i < 11; i++){
        if (P < factrial(i)) break;
        cnt = i;
    }

    int ans = 0;
    while (P != 0){
        ans += P/factrial(cnt);
        P = P%factrial(cnt);
        cnt--;
    }

    cout << ans << endl;
    return 0;
}
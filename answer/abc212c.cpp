// Min Difference

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll INF = 1LL << 60;

int main(){
    
    ll N, M;
    cin >> N >> M;
    map<ll, ll> data;
    map<ll, ll> data_a;
    map<ll, ll> data_b;
    for (int i = 0; i < N; i++){
        int tmp;
        cin >> tmp;

        if (data_a.count(tmp)) continue;
        data_a[tmp]++;
        data[tmp]++;
    }
    for (int i = 0; i < M; i++){
        int tmp;
        cin >> tmp;

        if (data_b.count(tmp)) continue;
        data_b[tmp]++;
        data[tmp]++;
    }

    ll ans = INF;
    ll roop = 0;
    ll pre = 0;
    for (auto p: data){
        auto num = p.first;
        auto cnt = p.second;
        if (cnt > 1){
            cout << 0 << endl;
            return 0;
        }

        if (roop == 0){
            pre = num;
            roop++;
            continue;
        }
        // cerr << pre << " " << num << endl;

        if (!((data_a.count(pre) && data_b.count(num)) || (data_a.count(num) && data_b.count(pre)))){
            pre = num;
            continue;
        }

        if (cnt < 2){
            ll buf = abs(num - pre);
            ans = min(ans, buf);
        }
        pre = num;
        roop++;
    }

    cout << ans << endl;
    return 0;
}
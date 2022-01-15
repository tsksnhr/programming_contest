#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main(){

    int N, K;
    cin >> N >> K;
    map<ll, ll> ball_data;
    for (int i = 0; i < N; i++){
        int tmp;
        cin >> tmp;
        ball_data[tmp]++;
    }
//    for (auto p: ball_data) cout << p.first << " " << p.second << endl;

    ll ans = 0;
    ll cnt = 0;
    ll vacant_box = 0;
    bool flg = false;
    for (auto p: ball_data){
        auto ball_number = p.first;
        auto ball_count = p.second;

        if (cnt == ball_number){
            vacant_box = K - ball_count;
            if (vacant_box > 0) {
                ans += ball_number*vacant_box;
                K -= vacant_box;
            }
        }
        else{
            ans += K*cnt;
            flg = true;
            break;
        }
        cnt++;
//        cout << "ans = " << ans << endl; 
    }
    if(!flg) ans += K*cnt;

    cout << ans << endl;
    return 0;
}

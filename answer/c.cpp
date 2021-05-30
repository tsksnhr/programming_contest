// Friends and Travel costs

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    
    ll N, K;
    cin >> N >> K;
    vector<pair<ll, ll>> ab(N);
    for (ll i = 0; i < N; i++) cin >> ab.at(i).first >> ab.at(i).second;
    sort(ab.begin(), ab.end());

    ll remaining = K;
    ll pos = 0;
    bool is_rent_ok = true;
    for (ll i = 0; i < N; i++){
//        cerr << pos << endl;
        ll dif_pos;
        ll A = ab.at(i).first, B = ab.at(i).second;

        dif_pos = A - pos;
        is_rent_ok = remaining >= dif_pos;

        if (is_rent_ok){
            remaining =  (remaining - dif_pos) + B;
            pos = A;
        }
        else{
            pos += remaining;
            remaining = 0;
            break;
        }
    }
    pos += remaining;

    cout << pos << endl;
    
    return 0;
}
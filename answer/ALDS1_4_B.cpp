#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool binary_search(ll l, ll r, vector<ll> &s_sequence, ll target){
    
    while (r - l > 1){
        ll mid = l + (r - l)/2;
        ll mid_val = s_sequence.at(mid);
        
        if (mid_val == target) return true;
        else if (mid_val < target) l = mid;
        else r = mid;
    }

    return false;
}

int main(){

    ll S, T;
    cin >> S;
    vector<ll> s_sequense(S);
    for (ll i = 0; i < S; i++) cin >> s_sequense.at(i);
    cin >> T;
    vector<ll> t_sequense(T);
    for (ll i = 0; i < T; i++) cin >> t_sequense.at(i);

    ll ans = 0;
    for (ll i = 0; i < T; i++){
        ll target = t_sequense.at(i);
        ll over_target = target + 1;

        ll left = 0;
        ll right = S;

        bool is_exist = binary_search(left, right, s_sequense, target);
        if (is_exist) ans++;
    }

    cout << ans << endl;
    return 0;
}
// Uplift (star_3)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll N_max = 1e5+10;

int main(){

    ll N, Q;
    cin >> N >> Q;
    vector<ll> A(N_max, 0);
    vector<ll> A_dif(N_max, 0);
    ll sum = 0;
    for (ll i = 0; i < N; i++){
        cin >> A.at(i);

        if (i != 0) A_dif.at(i) = A.at(i-1) - A.at(i);
        sum += abs(A_dif.at(i));
    }

    ll ans = sum;
    for (ll i = 0; i < Q; i++){
        ll left, right, value;
        cin >> left >> right >> value;
        left--;
        right--;

        ll l_dif = 0, r_dif = 0;
        if (left != 0){
            l_dif = A_dif.at(left);
            l_dif -= value;
        }
        if (right != N-1){
            r_dif = A_dif.at(right+1);
            r_dif += value;
        }

        ans += (abs(l_dif) - abs(A_dif.at(left)));
        ans += (abs(r_dif) - abs(A_dif.at(right+1)));
        cout << ans << endl;

        A_dif.at(left) = l_dif;
        A_dif.at(right+1) = r_dif;
    }

    return 0;
}
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

        if (i != 0) A_dif.at(i) = abs(A.at(i) - A.at(i-1));
        sum += A_dif.at(i);
    }

    ll ans = sum;
    vector<ll> change(N_max, 0);
    for (ll i = 0; i < Q; i++){
        ll left, right, value;
        cin >> left >> right >> value;
        left--;
        right--;

        A.at(left) += value;
        if (left != right) A.at(right) += value;

//        for (ll j = left; j <= right; j++) A.at(j) += value;

        ll l_dif = 0, l_dif_pre = 0, r_dif = 0, r_dif_pre = 0;
        if (left > 0){
            l_dif = abs(A.at(left-1) - A.at(left));
            l_dif_pre = l_dif;

            l_dif = l_dif - A_dif.at(left);
            A_dif.at(left) = l_dif_pre;
        }
        if (right < N-1){
            r_dif = abs(A.at(right+1) - A.at(right));
            r_dif_pre = r_dif;

            r_dif = r_dif - A_dif.at(right+1);
            A_dif.at(right+1) = r_dif_pre;
        }
        ans += (l_dif + r_dif);

        cout << ans << endl;
    }

    return 0;
}
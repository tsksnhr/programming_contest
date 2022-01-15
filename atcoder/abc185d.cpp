#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solver(ll N, ll M, vector<ll> &A, ll &ans){

    if (M == 0){
        ans = 1;
        return;
    }
    if (N == M) return;

    sort(A.begin(), A.end());

    ll dif = 1e9;
//    vector<ll> difs;
    map<ll, int> difs;
    if (A.at(0) > 1){
        dif = A.at(0);
        dif--;
        difs[dif]++;
    }
    for (ll i = 0; i < M-1; i++){
        ll tmp = A.at(i+1) - A.at(i);
        tmp--;

        if (tmp != 0){
            difs[tmp]++;
            dif = min(dif, tmp);
        }
    }
    ll tmp = N - A.at(M-1);
    if (tmp > 0){
        dif = min(dif, tmp);
        difs[tmp]++;
    }

//    cerr << dif << endl;
//    for (auto p: difs) cerr << p.first << " " << p.second << endl;

//    if (dif == 0) return;
    for (auto p: difs){
        ll each_dif = p.first;
        ll num = p.second;
        if (each_dif%dif == 0) ans += (each_dif/dif)*num;
        else ans += (each_dif/dif + 1)*num;
    }

    return;
}

int main(){

    ll N, M;
    cin >> N >> M;
    vector<ll> A(M);
    for (ll i = 0; i < M; i ++) cin >> A.at(i);

    ll ans = 0;
    solver(N, M, A, ans);

    cout << ans << endl;
    return 0;
}
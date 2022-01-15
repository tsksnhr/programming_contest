// Fair Candy Didtribution

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;

const ll MOD = 1e9 + 7;
const ll INF = 1LL << 60;

int main(){

    ll N, K;
    cin >> N >> K;
    vector<P> A(N);
    vector<ll> B(N);
    for (ll i = 0; i < N; i++){
        cin >> A.at(i).first;
        B.at(i) = A.at(i).first;
    }
    sort(B.begin(), B.end());

    ll each_num = K/N;
    ll mod = K%N;
    ll tag = B.at(mod);

    ll cnt = 0;
    for (int i = 0; i < N; i++){
        ll add = 0;
        if (A.at(i).first < tag) add = each_num + 1;
        else add = each_num;

        A.at(i).second = add;
    }

    for (int i = 0; i < N; i++){
        cout << A.at(i).second << endl;
    }

    return 0;
}
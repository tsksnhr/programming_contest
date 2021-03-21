#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;
    vector<ll> A(N);
    vector<ll> B(N);
    ll a_min = 1e6, b_min = 1e6, a_pos = -1, b_pos = -1;
    map<ll, ll> a_time;
    map<ll, ll> b_time;
    for (ll i = 0; i < N; i++){
        cin >> A.at(i) >> B.at(i);
        
        a_time[A.at(i)]++;
        b_time[B.at(i)]++;

        a_min = min(a_min, A.at(i));
        if (a_min == A.at(i)) a_pos = i;

        b_min = min(b_min, B.at(i));
        if (b_min == B.at(i)) b_pos = i;
    }

    ll a_2nd_min, b_2nd_min;
    for (auto p: a_time){
        if (p.first != a_min){
            a_2nd_min = p.first;
            break;
        }
    }
    for (auto p: b_time){
        if (p.first != b_min){
            b_2nd_min = p.first;
            break;
        }
    }

    ll ans = -1;
    if (a_pos != b_pos) ans = max(a_min, b_min);
    else if (a_time[a_min] > 1 || b_time[b_min] > 1) ans = max(a_min, b_min);
    else{
        ll tmp1 = a_min + b_min;
        ll tmp2 = max(a_min, b_2nd_min);
        ll tmp3 = max(a_2nd_min, b_min);
        cerr << tmp1 << " " << tmp2 << " " << tmp3 << endl;
        ans = min(tmp1, min(tmp2, tmp3));
    }

    cout << ans << endl;
    return 0;
}
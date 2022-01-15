// Ringo's Favorite Numbers 2
// TODO: solve

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solver(vector<ll> &A, ll &ans){

    for (int i = 0; i < A.size(); i++){
        for (int j = i+1; j < A.size(); j++){
            ll dif = A.at(j) - A.at(i);
            if (dif%200 == 0) ans++;
        }
    }

    return;
}

void solver2(vector<ll> &A, map<ll, ll> &A_dict, ll &ans){

    for (int i = A.size()-1; i >= 0; i--){
        A_dict[A.at(i)]--;
        if (!A_dict.count(A.at(i))) A_dict.erase(A.at(i));

        for (auto p: A_dict){
            auto num = p.first;
            auto cnt = p.second;

            if ((A.at(i) - num)%200 == 0) ans += cnt;
        }   
    }

    return;
}

int main(){

    ll N;
    cin >> N;
    vector<ll> A(N);
    map<ll, ll> A_dict;
    for (ll i = 0; i < N; i++){
        cin >> A.at(i);
        A_dict[A.at(i)]++;
    }

    ll ans = 0, ans_2 = 0;
    // solver(A, ans);
    solver2(A, A_dict, ans_2);

    // cout << ans << endl;
    cout << ans_2 << endl;
    return 0;
}
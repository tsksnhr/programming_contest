#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N, X;
    cin >> N >> X;

    vector<ll> ans_array;
    ll cnt = 0;
    for (ll i = 0; i < N; i++){
        ll A_tmp;
        cin >> A_tmp;

        if (A_tmp != X){
            ans_array.push_back(A_tmp);
            cnt++;
        }
    }

    for (ll i = 0; i < ans_array.size(); i++){
        cout << ans_array.at(i);

        if (i+1 == ans_array.size()) cout << endl;
        else cout << " "; 
    }
    
    return 0;
}

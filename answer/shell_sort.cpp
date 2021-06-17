// Shell Sort
// ALDS1_2_D

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void insertion_sort(ll N, ll g, vector<ll> &array, ll &cnt){

    for (ll i = g; i < N; i++){
        ll value = array.at(i);
        ll j = i - g;

        while (j >= 0 && array.at(j) > value){
            array.at(j+g) = array.at(j);
            j -= g;
            cnt++;
        }
        array.at(j+g) = value;
    }

    return;
}

void shell_sort(ll N, vector<ll> &array, ll &cnt){

    cnt = 0;
    vector<ll> G;
    G.push_back(1);
    ll pos = 0;
    while (true){
        ll buf = 3*G.at(pos) + 1;
        pos++;
        if (buf < N) G.push_back(buf);
        else break;
    }

    for (ll i = pos-1; i >= 0; i--) insertion_sort(N, G.at(i), array, cnt);

    cout << pos << endl;
    for (ll i = pos-1; i >= 0; i--){
        cout <<  G.at(i);
        if (i != 0) cout << " ";
        else cout << endl;
    }
    cout << cnt << endl;

    return;
}

int main(){

    ll N;
    cin >> N;
    vector<ll> array(N);
    for (ll i = 0; i < N; i++) cin >> array.at(i);

    ll cnt;
    shell_sort(N, array, cnt);

    for (ll i = 0; i < N; i++){
        cout <<  array.at(i) << endl;
    }

    return 0;
}
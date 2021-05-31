// Shift ans Swapping (star_3)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// TODO: solve

int main(){

    ll N, Q;
    cin >> N >> Q;
    vector<ll> A(N);
    for (ll i = 0; i < N; i++) cin >> A.at(i);

    ll right = 0;
    for (ll i = 0; i < Q; i++){
        ll T, x, y;
        cin >> T >> x >> y;
        x--;
        y--;
        x -= right;
        y -= right;
        x %= N;
        y %= N;
        if (x < 0) x = N + x;
        if (y < 0) y = N + y;

        if (T == 1){
            swap(A.at(x), A.at(y));            
        }
        else if (T == 2){
            right++;
        }
        else{
            cout << A.at(x) << endl;
        }

//        for (auto x: A) cerr << x << " ";
//        cerr << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    
    ll N, S, D;
    cin >> N >> S >> D;

    bool flg = false;
    for (ll i = 0; i < N; i++){
        ll X, Y;
        cin >> X >> Y;

        if ((X < S) && (Y > D)){
            flg = true;
        }
    }

    if (flg) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}
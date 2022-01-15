#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    int N, X;
    cin >> N >> X;
    
    double drink_amount = 0., alcohol_amount = 0.;
    int ans = 0;
    bool drunk_flg = false;
    for (int i = 0; i < N; i++){
        double v, p;
        cin >> v >> p;

        alcohol_amount = v*(p/100.);
        drink_amount += alcohol_amount;
        ans++;

        if (drink_amount > X){
            drunk_flg = true;
            break;
        }
    }

    if (drunk_flg) cout << ans << endl;
    else cout << -1 << endl;

    return 0;
}
// Savings

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N;
    cin >> N;

    ll now = 0;
    ll day = 1;
    ll ans = 0;
    while (true){
        now += day;
//        cerr << now << endl;

        if (now >= N - (day+1)){
            ans = day+1;
            break;
        }
        day++;
    }

    if (N == 1) ans = 1;
    cout << ans << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll fib(ll n, vector<ll> &dp){

    if (dp.at(n) != -1){
        return dp.at(n);
    }
    else if ((n == 0) || (n == 1)) return 1;
    else{
        return dp.at(n) = fib(n-1, dp) + fib(n-2, dp);
    }
}

int main(){

    ll n;
    cin >> n;

    vector<ll> dp(n+1, -1);
    ll ans = fib(n, dp);

    cout << ans << endl;
    return 0;
}
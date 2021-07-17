// Fibonacci Number

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll Fibonacci(ll *dp, ll n){

    if (n == 0 || n == 1){
        dp[n] = 1;
        return dp[n];
    }

    if (dp[n] != -1){
        return dp[n];
    }
    else{
        dp[n] = Fibonacci(dp, n-1) + Fibonacci(dp, n-2);
        return dp[n];
    }
}

int main(){

    int N;
    cin >> N;

    ll dp[50];
    for (int i = 0; i <= N; i++) dp[i] = -1;

    Fibonacci(dp, N);
    
    cout << dp[N] << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solver(int N, int X, int T, int &ans){

    int div, mod;
    div = N/X;
    mod = N%X;

    if(mod != 0) ans = (div+1)*T;
    else ans = div*T;

    return;
}

int main(){

    int N, X, T;
    cin >> N >> X >> T;

    int ans{};
    solver(N, X, T, ans);
    cout << ans << endl;

    return 0;
}
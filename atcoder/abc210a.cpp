// Cabbages

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

    int N, A, X, Y;
    cin >> N >> A >> X >> Y; 

    int ans = 0;
    if (N - A >= 0){
        ans = X*A + Y*(N-A);
    }
    else ans = X*N;

    cout << ans << endl;
    return 0;
}
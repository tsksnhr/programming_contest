#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    int X;
    cin >> X;

    int ans = 0;
    ans = 100 - X%100;

    cout << ans << endl;
    return 0;
}
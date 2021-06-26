// 

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

    int a, b, c;
    cin >> a >> b >> c;

    int ab = a + b;
    int bc = b + c;
    int ca = c + a;

    int ans = max(ab, max(bc, ca));
    cout << ans << endl;

    return 0;
}
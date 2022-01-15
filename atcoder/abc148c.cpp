#include <bits/stdc++.h>
using namespace std;

long long a,b;
long long g, ans;

int main(){

    cin >> a >> b;
    g = __gcd(a, b);
    ans = (a*b)/g;

    cout << ans << endl;
    return 0;
}
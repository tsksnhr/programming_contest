#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b;
    cin >> a >> b;

    int ans;
    ans = max(max(a+b, a-b), a*b);

    cout << ans << endl;
    return 0;
}
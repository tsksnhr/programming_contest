// Chinchirorin

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    int a, b, c;
    cin >> a >> b >> c;

    int ab, bc, ca;
    ab = a - b;
    bc = b - c;
    ca = c - a;

    if (ab == 0) cout << c << endl;
    else if (bc == 0) cout << a << endl;
    else if (ca == 0) cout << b << endl;
    else cout << 0 << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll A, B;
    cin >> A >> B;

    ll milk_solid = A + B;

    if ((milk_solid >= 15) && (B >= 8)) cout << 1 << endl;
    else if ((milk_solid >= 10) && (B >= 3)) cout << 2 << endl;
    else if (milk_solid >= 3) cout << 3 << endl;
    else cout << 4 << endl;
}
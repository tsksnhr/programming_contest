#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll A, B;
    cin >> A >> B;

    ll price_dif = A - B;
    double ans = (double)price_dif/(double)A;

    cout << fixed << setprecision(10);
    cout << ans*100. << endl;
    return 0;
}
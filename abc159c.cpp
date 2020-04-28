#include<bits/stdc++.h>
using namespace std;

int L;

int main(){

    cin >> L;
    double a, b, c, ans;

    a = L/3.000;
    b = a;
    c = a;
    ans = a*b*c;

    cout << fixed << setprecision(15) << endl;
    cout << ans << endl;
    return 0;
}
// Blood Pressure

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using P = pair<ll, ll>;

int main(){

    double A, B;
    cin >> A >> B;

    double C = (A - B)/3 + B;

    cout << setprecision(8);
    cout << C << endl;   

    return 0;
}
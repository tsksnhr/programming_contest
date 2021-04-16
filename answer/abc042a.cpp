#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    string S;
    string a, b, c;
    cin >> a >> b >> c;

    S = a + b + c;
    bool is_Haiku = false;
    if ((S == "755") || (S == "575") || (S == "557")) is_Haiku = true;

    if (is_Haiku) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll X, Y;
    cin >> X >> Y;

    ll temp = X, cnt = 0;
    while (temp<=Y){
        cnt++;
        temp *= 2;
    }

    cout << cnt << endl;
    return 0;
}
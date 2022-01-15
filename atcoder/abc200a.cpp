// Century

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

    int N;
    cin >> N;

    int div = N/100;
    int mod = N%100;

    if (mod != 0) cout << div + 1 << endl;
    else cout << div << endl;

    return 0;
}
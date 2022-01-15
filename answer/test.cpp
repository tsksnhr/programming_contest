#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){


    ll a, b;
    a = pow(2, 30);
    b = pow(2, 30);
    bitset<36> tmp;
    tmp = a | b;

    cout << tmp << endl;
    return 0;
}

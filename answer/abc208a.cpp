// Rolling Dice

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll MOD = 1e9 + 7;
const ll INF = 1LL << 60;

int main(){

    int A, B;
    cin >> A >> B;

    int low, high;
    low = A;
    high = 6*A;

    if (low <= B && B <= high){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}
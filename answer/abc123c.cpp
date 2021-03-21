#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N, A, B, C, D , E;
    cin >> N >> A >> B >> C >> D >> E;

    ll min_each_move = min(A, min(B, min(C, min(D, E))));
    ll div = N/min_each_move;
    if (N%min_each_move == 0) div--;

    /*
    if (min_each_move == A) div += 4;
    else if (min_each_move == B) div += 3;
    else if (min_each_move == C) div += 2;
    else if (min_each_move == D) div += 1;
    else;
    */

    div += 5;
    ll ans = div;

    cout << ans << endl;
    return 0;
}
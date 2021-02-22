#include <bits/stdc++.h>
using namespace std;

int main(){

    int V, T, S, D;
    cin >> V >> T >> S >> D;

    int t_dist, s_dist;
    t_dist = T*V;
    s_dist = S*V;

    if ((D < t_dist) || (D > s_dist)) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}
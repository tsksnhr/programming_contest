// Can you buy them all ?

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

    int N, X;
    cin >> N >> X;

    ll sum = 0;
    for (int i = 0; i < N; i++){
        int a;
        cin >> a;
        
        if (i%2 != 0) a--;
        sum += a;
    }

    if (sum <= X) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
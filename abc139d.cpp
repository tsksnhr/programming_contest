#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll N;

int main(){

    cin >> N;

    ll ans = 0, mid;
    if (N%2 == 0){
        mid = N/2;
        ans = N*((N-1)/2) + mid;
    }
    else{
        ans  = N*((N-1)/2);
    }

    cout << ans << endl;
    return 0;
}
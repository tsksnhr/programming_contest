#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e18;

ll mulmul(ll a, ll x){

    ll base = 1;
    if (x == 0) return 1;
    else{
        while(x != 0){
            base *= a;
            x--;
        }
        return base;
    }
}

void solver(ll N, ll &a, ll &b, bool &is_exist){

    ll ans = 0;
    for (a = 1; a < 40; a++){
        for (b = 1; b < 30; b++){
            ll left = mulmul(3, a);
            ll right = mulmul(5, b);

            if (left + right == N){
                is_exist = true;
                return;
            }
            if (left + right > N) break;
        }
    }

    return;
}

int main(){

    ll N;
    cin >> N;

    ll a = 1, b = 1;
    bool is_exist = false;
    solver(N, a, b, is_exist);

   if (is_exist) cout << a << " " << b << endl;
   else cout << -1 << endl;
   return 0;
}
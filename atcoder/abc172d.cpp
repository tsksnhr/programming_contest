// hadn't get AC yet...

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void prime_factorization(int buf, map<int, int> &divisor){

    int div;
    int thr = sqrt(buf);

    if (buf == 1) {
        divisor[0]++;
        return;
    }
    else {
        for (div=2; div<thr+1; div++){
            while (buf%div == 0){
                buf /= div;
                divisor[div]++;
            }
        }

        if (buf != 1) {
            divisor[buf]++;
        }
    }
    return;
}

int main(){

    ll N;
    cin >> N;
    vector<ll> div_num(N, 1);
    ll K = 0;
    vector<bool> used(N, false);

    for(ll i=1; i<N; i++){
        K = i+1;
        map<int, int> divisor;
        if(used.at(i) == false) prime_factorization(K, divisor);

        for(auto p: divisor){
            auto key = p.first;
            auto value = p.second;
            div_num.at(i) *= (value + 1);
        }
        if((K%2 != 0) && (2*K-1<N)){
            ll temp = div_num.at(i);
            div_num.at(2*K-1) = temp*2;
            used.at(2*K-1) = true;
        }
        divisor.clear();
        used.at(i) = true;
    }

    ll ans = 1;
    for(ll i=1; i<N; i++){
        ll K = i+1;
//        cout << K << "*" << div_num.at(i) << " "; 
        ans += K*div_num.at(i);
    }

    cout << ans << endl;
    return 0;
}
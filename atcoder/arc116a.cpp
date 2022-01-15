#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// TODO: solve

bool IsPrime(ll num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            // 素数ではない
            return false;
        }
    }

    // 素数である
    return true;
}

int main(){

    ll T;
    cin >> T;
    vector<ll> cases(T);
    for (ll i = 0; i < T; i++) cin >> cases.at(i);

    map<ll, ll> divisor_data;
    for (ll i = 0; i < T; i++){
        ll tmp = cases.at(i);
        ll even_cnt = 1, odd_cnt = 1, total_cnt = 1;

        if (tmp != 2){
            bool flg = IsPrime(tmp);
            if (flg) {
                cout << "Odd" << endl;
                continue;
            }
        }

        ll divisor = 2;
        while (tmp != 1){
            ll div = 0;
            ll buf = 0;
            while (tmp%divisor == 0){
                tmp /= divisor;
                buf++;
            }
            if (divisor%2 != 0) odd_cnt *= buf + 1;
            total_cnt *= buf + 1;

            divisor++;
//            cerr << divisor << " " << tmp << endl;
        }            
        even_cnt = total_cnt - odd_cnt;
//        cerr << total_cnt << " " << even_cnt << " " << odd_cnt << endl;

        if (even_cnt > odd_cnt) cout << "Even" << endl;
        else if (even_cnt < odd_cnt) cout << "Odd" << endl;
        else cout << "Same" << endl;

        divisor_data.clear(); 
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main(){

    ll X, K, D;
    cin >> X >> K >> D;
    X = abs(X);
    
    ll cnt{}, l{}, r{}, min_num{}, ans{};
    cnt = abs(X/D);

    if(cnt>K){
//        cout << "called"s << endl;
        ans = abs(X - K*D);
    }
    else{
        l = abs(X - D*(cnt+1));
        r = abs(X - D*cnt);
        min_num = min(l, r);
        
        bool lflg = false;
        if(min_num == l) lflg = true;
        else lflg = false;

        ll cnt_dif{};
        if(lflg == true) cnt_dif = K - (cnt+1);
        else cnt_dif = K - cnt;

        if(cnt_dif%2 == 0) ans = min_num;
        else{
            if(lflg == true) ans = r;
            else ans = l;
        }
    }

    cout << ans << endl;
    return 0;
}

//  反省1：A<Bと思い込んだ
//  反省2：A,Bがそれぞれ行ったり来たりできると思い、問題を無駄に難しく解釈した

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll a, v, b, w, T;
    cin >> a >> v >> b >> w >> T;

    ll dif = abs(b-a);
    ll pdif = w-v;

    if (pdif>=0){
        cout << "NO" << endl;
    }
    else{
        ll cnt, mod;
        cnt = dif/abs(pdif);
        mod = dif%abs(pdif);

        if (mod != 0) cnt++;
        
        //  余りが出た際の追いかけっこは戻らないらしい・・・
        if (T<cnt) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
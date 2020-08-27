#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<ll, ll>;
const ll INF = 1e16;

void solver(int N, ll Y, int &a, int &b, int &c){

    ll money;
    bool flg = false;
    for(a = 0; a != N+1; ++a){
        for(b = 0; b != N+1-a; ++b){
            c = N - (a + b);
            money = a*10000 + b*5000 + c*1000;

            if(money == Y){
                flg = true;
                break;
            }
        }
        if(flg) break;
    }

    if(!flg){
        a = -1;
        b = -1;
        c = -1;
    }

    return;
}

int main(){

    int N;
    ll Y;
    cin >> N >> Y;

    int a{}, b{}, c{};
    solver(N, Y, a, b, c);

    cout << a << " "s << b << " "s << c << endl;

    return 0;
}
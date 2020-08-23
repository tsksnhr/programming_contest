#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long ;
using P = pair<ll, ll>;
const ll INF = 1e16;

void solver(int N, vector<int> const &t, vector<int> const &x, vector<int> const &y, bool &flg){

    int t_dif{}, x_dif{}, y_dif{}, thr{};
    for(int i = 0; i != N; ++i){
        t_dif = t.at(i+1) - t.at(i);
        x_dif = abs(x.at(i+1) - x.at(i));
        y_dif = abs(y.at(i+1) - y.at(i));
        thr = t_dif - (x_dif + y_dif);

        if(thr < 0){
            flg = false;
            break;
        }
        else if(thr%2 != 0){
            flg = false;
            break;
        }
    }

    return;
}

int main(){

    int N;
    cin >> N;
    vector<int> t(N+1);
    vector<int> x(N+1);
    vector<int> y(N+1);
    for(int i = 1; i != N+1; ++i) cin >> t.at(i) >> x.at(i) >> y.at(i);

    bool flg = true;
    solver(N, t, x, y, flg);

    if(flg) cout << "Yes"s << endl;
    else cout << "No"s << endl;

    return 0;
}
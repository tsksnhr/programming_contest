#include <bits/stdc++.h>
using namespace std;

const int INF = 2e5;

int x, max_prime, tmp, cnt;
vector<int> p_array(INF);
vector<int> p_flg(INF, 1);

int main(){

    cin >> x;

    /*
    for (auto z: p_flg){
        cout << z;
    }
    cout << endl;
    */

    for (int i=2; i<INF; i++){
        if (p_flg.at(i) == 1){
            cnt = 2;
            tmp = i*cnt;

            while (tmp<INF){
                p_flg.at(tmp) = 0;
                cnt++;
                tmp = i*cnt;
            }
        }
    }

    for (int i=x; i<=INF; i++){
        if (p_flg.at(i) == 1){
            max_prime = i;
            break;
        }
    }

    /*
    for (auto z: p_flg){
        cout << z;
    }
    cout << endl;
    */

    cout << max_prime << endl;
    return 0;
}

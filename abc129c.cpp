#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MOD = 1e9+7;

ll Step(int num);

ll cnt = 0, dbg = 0;
int n, m;
map<int, int> hole;
vector<ll> memo(1e5+3, -1);

int main(){

    cin >> n >> m;
    for (int i=0; i<m; ++i){
        int temp;
        cin >> temp;
        hole[temp]++;
    }

    cnt = Step(n);
//    dbg = Step(2);

    cout << cnt << endl;
//    cout << dbg << endl;
    return 0;
}

ll Step(int num){

    if (hole.count(num)){
        return memo.at(num) = 0;
    }
    else{
        if (memo.at(num) != -1){
            return memo.at(num)%MOD;
        }
        // num==2の時の値を2にすると、num==1がholeの時の結果が不整合
        else if (num <= 1){
            return 1;
    //        return 1;
        }
        else{
            return memo.at(num) = (Step(num - 1)%MOD + Step(num - 2)%MOD)%MOD;
        }
    }
}
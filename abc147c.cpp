#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

int counter(int num);

int n;
vector<int> a(20);
vector<vector<int>> x(20, vector<int>(20));
vector<vector<int>> y(20, vector<int>(20));

int main(){
    cin >> n;
    int i, j;
    for (i = 1; i <= n; i++){
//    for (i = 0; i < n; i++){
        cin >> a.at(i);
        for (j = 1; j <= a.at(i); j++){
            cin >> x.at(i).at(j) >> y.at(i).at(j);
        }
    }
    int bits;
    int ans = 0;    
    for (bits = 0; bits < (1 << n); bits++){
        bool flg = true;
        for (i = 1; i <= n; i++){
//        for (i = 0; i < n; i++){
            if( !(bits & (1 << (i-1)))){
//            if( !(bits & (1 << (i)))){
                continue;
            }
            for (j = 1; j <= a.at(i); j++){
//            for (j = 0; j < a.at(i); j++){
                if (((bits >> (x.at(i).at(j)-1)) & 1) ^ (y.at(i).at(j)) ){
//                if (((bits >> (x.at(i).at(j))) & 1) ^ (y.at(i).at(j)) ){
                    flg = false;
                }
            }
        }
        if (flg == true){
            ans = max(ans, counter(bits));
        }
    }
    cout << ans << endl;
    return 0;
}

int counter(int num){
    //  数値が全部0であれば再帰終了
    if (num == 0){
        return 0;
    }
    //  LSBと1でand演算、1であればカウント
    //  右ビットシフトして再帰
    return counter(num >> 1) + (num & 1);
}
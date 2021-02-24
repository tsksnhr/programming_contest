#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
const ll INF = 1e9;

void solver(int N, int A, int B, int C, int D, string &S, bool &flg){

}

int main(){

    int N, A, B, C, D;
    string S;
    cin >> N >> A >> B >> C >> D >> S;

    bool flg = true;
    solver(N, A, B, C, D, S, flg);

    if(flg){
        cout << "Yes"s << endl;
    }
    else{
        cout << "No"s << endl;
    }
    return 0;
}
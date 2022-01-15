// Exhaustive Search

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int elems[25];
int targets[205];

bool recurtion_sum(int N, int pos, int sum, int target){

//    cerr << pos << " " << sum  << " " << target << endl;

    if (pos == N){
        if (sum == target) return true;
        else return false;
    }
    else return recurtion_sum(N, pos + 1, sum + elems[pos], target) || recurtion_sum(N, pos + 1, sum             , target);
}

int main(){

    int N;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> elems[i];
    }
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++){
        cin >> targets[i];

        bool is_exist = recurtion_sum(N, 0, 0, targets[i]);
        if (is_exist) cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int N;
vector<ll> height(1e5+3);

int main(){

    cin >> N;
    for (int i=0; i<N; i++){
        cin >> height.at(i);
    }

    int move_mem = 0, move_tmp = 0;
    for (int i=1; i<N; i++){
        if (height.at(i-1) >= height.at(i)){
            move_tmp++;
        }
        else{
            move_mem = max(move_tmp, move_mem);
            move_tmp = 0;
        }
    }
    move_mem = max(move_tmp, move_mem);

    cout << move_mem << endl;
    return 0;
}
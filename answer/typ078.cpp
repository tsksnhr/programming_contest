// Easy Graph Problem

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

    int N, M;
    cin >> N >> M;
    map<int, int> have_lower_node;

    for (int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        have_lower_node[max(a,b)]++;
    }

    int ans = 0;
    for (auto p: have_lower_node){
        if (p.second ==  1){
            cerr << p.first << endl;
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
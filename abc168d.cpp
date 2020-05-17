#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main(){

    int n, m;
    cin >> n >> m;
    vector<vector <int>> room(n, vector<int>(n));
    map<P, int> dict;
    vector<int> ans(n);
    for (int i=0; i<m; i++){
        int tempa, tempb, pf, ps;
        cin >> tempa >> tempb;
        pf = min(tempa, tempb);
        ps = max(tempa, tempb);
        P p(pf, ps);
        dict[p]++;
    }


    
}

void dfs(int pos, int end, map<P, int> m){

    if (pos == end){
        return;
    }

    return dfs()
}
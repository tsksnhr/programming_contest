#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;

ll cnt = 0;

void dfs(int pos, int end, map<int, int> dict){

    if (pos == end){
        cnt++;
        cnt = cnt%mod;
        return;
    }
    else if (dict.count(pos)){
        return;
    }
    else if (pos > end){
    	return;
    }
    else{
        dfs(pos+1, end, dict);
        dfs(pos+2, end, dict);
    }
}

int main(){

    int n, m;
    cin >> n >> m;
    map<int, int> dict;
    int i;
    for (i=0; i<n; i++){
        int temp;
        cin >> temp;
        dict[temp]++;
    }

    dfs(0, n, dict);
    cout << cnt << endl;
    return 0;
}
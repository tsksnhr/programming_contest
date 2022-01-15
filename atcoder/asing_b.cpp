#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;

    vector<int> a(N+1);
    for(int i=1; i<=N; i++) cin >> a.at(i);

    int cnt = 0;
    for(int i=0; i<=N; i++){
        if((a.at(i)%2 != 0) && (i%2 != 0)) cnt++;
    }

    cout << cnt << endl;
    return 0;
}
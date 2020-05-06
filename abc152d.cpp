#include <bits/stdc++.h>
using namespace std;

pair<int, int> keta_num(int x);

int main(){
    
    int N;
    cin >> N;

    pair<int, int> p;
    int k;
    map<pair<int, int>, int> freq;
    int64_t ans = 0;

    for (k=1; k<=N; k++){

        p = keta_num(k);
        freq[p]++;
    }

    for (k=1; k<=N; k++){

        p = keta_num(k);
        
        pair<int, int> q(p.second, p.first);
        ans += freq[q];
    }

    cout << ans << endl;
    return 0;
}

pair<int, int> keta_num(int x){
    
    int last = x%10;
    int first = 0;

    while(x){
        first = x;
        x /= 10;
    }
        
    return pair<int, int> (first, last);
}
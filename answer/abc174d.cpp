// not solved...

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main(){

    int N;
    string s;
    cin >> N >> s;

    int w_num = 0;
    for(int i=0; i<N; i++){
        if(s.at(i) == 'R') break; 
        else w_num++;
    }

    int l{}, r{};
    int cnt = 0;
    while(true){
        if(s.at(cnt) == 'W'){
            l = cnt;
            break;
        }
        cnt++;

        if(cnt == N){
            cout << 0 << endl;
            return 0;
        }
    }
    cnt = N-1;
    while(true){
        if(s.at(cnt) == 'W'){
            r = cnt;
            break;
        }
        cnt--;
    }

    cnt = 0;
    for(int i = l; i!=r+1; i++){
        if(s.at(i) == 'R') cnt++;
    }

    cerr << "debug > cnt: " << cnt << endl;
    cerr << "debug > l: " << l << endl;
    cerr << "debug > r: " << r << endl;

    int ans = 0;
    if(cnt!=0) ans = cnt-(l+1) + (N-1-r);
    else ans = w_num;
    cout << ans << endl;
    return 0;
}
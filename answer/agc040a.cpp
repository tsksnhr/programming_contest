#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

ll solver(string s){

    int N = s.size();
    vector<int> l_smaller_r(N+1);
    vector<int> l_larger_r(N+1);

    int cnt = 0;
    for(int i = 0; i != N; ++i){
        if(s.at(i) == '<') ++cnt;
        else cnt = 0;
        l_smaller_r.at(i+1) = cnt;
    }

    //  debug
    cerr << "called"s << endl;

    cnt = 0;
    for(int i = N-1; i != -1; --i){
        if(s.at(i) == '>') ++cnt;
        else cnt = 0;
        l_larger_r.at(i) = cnt;
    }

    //  debug
    cerr << "called"s << endl;

    ll ans = 0;
    for(int i = 0; i != N+1; ++i) ans += max(l_smaller_r.at(i), l_larger_r.at(i));

    return ans;
}

int main(){

    string s;
    cin >> s;

    cout << solver(s) << endl;

    return 0;
}
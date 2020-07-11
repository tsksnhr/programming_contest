#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll N;
    cin >> N;

    bool flg = false;
    vector<int> ans(N+1);

    for(int a=1; a<=sqrt(N); a++){
        for(int b=1; b<=sqrt(N); b++){
            for(int c=1; c<=sqrt(N); c++){
                int buf = a*a + b*b + c*c + a*b + b*c + c*a;
                if(a*a + b*b + c*c + a*b + b*c + c*a <= N) ans.at(buf)++;
            }
        }
    }

    for(int i=1; i<=N; i++) cout << ans.at(i) << endl;
    return 0;
}
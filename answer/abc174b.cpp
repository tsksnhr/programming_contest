#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main(){
    
    int N, D;
    cin >> N >> D;
    
    ld temp = 0.0;
    int cnt = 0;
    for(int i=0; i<N; i++){
        double x, y;
        cin >> x >> y;
//        if(x>D) continue;
//        if(y>D) continue;
        temp = sqrt(x*x + y*y);
        cerr << "> debug: " << temp << endl;

        if(temp<=D) cnt++;
    }

    cout << cnt << endl;
    return 0;
}
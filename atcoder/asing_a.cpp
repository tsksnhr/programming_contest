#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int L, R, d;
    cin >> L >> R >>d;

    int cnt = 0;
    for(int i=L; i<= R; i++){
        if(i%d == 0) cnt++;
    }

    cout << cnt << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b;
    cin >> a >> b;

    string buf;
    int ans = 0;
    int l, r;
    bool flg = true;

    for (int i=a; i<b+1; i++){
        buf = to_string(i);

        l = 0;
        r = buf.size() - 1;
        while (l<r){
            if (buf.at(l) != buf.at(r)){
                flg = false;
                break;
            }
            l++;
            r--;
        }
        if (flg == true){
            ans++;
        }
        flg = true;
    }

    cout << ans << endl;
    return 0;
}
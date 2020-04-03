#include <bits/stdc++.h>
using namespace std;

int main(void){

    int i, size, ans;
    string s;
    char c;

    cin >> s;

    size = s.size();

    ans = 1;

    for (i=1; i<size; i += 2){

        c = s.at(i);

        if (c == '+'){
            ans += 1;
        }
        else{
            ans -= 1;
        }
    }

    cout << ans << endl;

    return 0;
}
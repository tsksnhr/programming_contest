#include <bits/stdc++.h>
using namespace std;

int main(){

    string s, ans;
    char c0, c1;
    int i, s_num, correct;

    cin >> s;

    s_num = s.size();

    for (i = 2; i<s_num; i += 2){
        c0 = s.at(i);
        c1 = s.at(i+1);

        if (c0 != c1){
            ans = "No";
            break;
        }
    }

    if (ans == "No"){
        cout << ans << endl;
    }
    else{
        cout << "Yes" << endl;
    }

    return 0;
}
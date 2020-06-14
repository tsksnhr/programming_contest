#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int num, pos;
    num = s.size();
    pos = 0;
    map<char, int> cdict;
    map<string, int> sdict;

    while(pos < num){
        int i = 0;
        if (cdict.count(s.at(pos)) == 0){
            cdict[s.at(pos)]++;
            cout << "a" << pos << endl;
        }
        else {
            i = 1; 
            bool flg = false;
            string buf = s.at(pos) + "";
            while (flg == false){
                pos = min(pos+i, num-1);
            cout << "b" << pos << endl;
                buf += s.at(pos);
                if (sdict.count(buf) == 0){
                    sdict[buf]++;
                    flg = true;
                }
                else i++;
            }
        }
        pos++;
        cout << "c" << pos << endl;
       
    }

    int ans = 0;
    for (auto p: cdict){
        ans++;
    }
    for (auto p: sdict){
        ans++;
    }

    cout << ans << endl;
    return 0;
}
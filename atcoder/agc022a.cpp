#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// after read editorial

int main(){
    
    string S;
    cin >> S;

    if (S.size() != 26){
        map<char, ll> ch_dict;
        for (ll i = 0; i < S.size(); i++) ch_dict[S.at(i)]++;
        
        string ans = S;
        char tmp = 'a';
        for (ll i = 0; i < 26; i++){
            for (auto p: ch_dict){
                if (p.first != tmp){
                    ans += tmp;
                    cout << ans << endl;
                    return 0;
                }
                tmp = (char)(tmp + 1);
            }
        }
    }

    char ch = S.at(S.size()-1);
    map<char, ll> right_ch_dict;
    right_ch_dict[ch]++;
    ll pos = -1;
    for (ll i = S.size()-2; i >= 0; i--){
        char ch_tmp = S.at(i);
        if (ch_tmp > ch){
            right_ch_dict[ch_tmp]++;
            ch = ch_tmp;
        }
        else{
            ch = ch_tmp;
            pos = i;
            break;            
        }
    }
    if (pos == -1){
        cout << -1 << endl;
        return 0;
    }

    for (auto p: right_ch_dict){
        auto ch_rightside = p.first;
        if (ch_rightside > ch){
            ch = ch_rightside;
            break;
        }
    }

    string ans = "";
    for (ll i = 0; i < pos; i++){
        ans += S.at(i);
    }
    ans += ch;

    cout << ans << endl;
    return 0;
}

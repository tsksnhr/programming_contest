#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// after editorial reading

int main(){

    string S;
    ll N;
    cin >> S >> N;

    vector<ll> word_array;
    ll group = 1;
    for (int i = 0; i < S.size()-1; i ++){
        if (S.at(i) == S.at(i+1)) group++;
        else{
            word_array.push_back(group);
            group = 1;
        }  
    }
    if (group != 1) word_array.push_back(group);
    if ((word_array.size() == 1) || S.size() == 1){
        cout << S.size()*N/2 << endl;
        return 0;
    }
//    cerr << word_array.size() << endl;

    ll ans = 0;
    bool is_lr_same = (S.at(0) == S.at(S.size()-1));
    for (int i = 1; i < word_array.size()-1; i++){
        ans += word_array.at(i)/2;
//        cerr << word_array.at(i) << endl;
    }
    ans *= N;
//    cerr << ans << endl;

    ll l = word_array.at(0);
    ll r = word_array.at(word_array.size()-1);
    if (is_lr_same){
        ans += l/2 + r/2 + ((l+r)/2)*(N-1);
    }
    else{
        ans += (l/2 + r/2)*N;
    }

    cout << ans << endl;
    return 0;
}


// Sign Up Requenst

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    int N;
    cin >> N;
    set<string> user_names;
    vector<int> accepted_days;
    for (int i = 0; i < N; i++){
        string tmp;
        cin >> tmp;
        
        if (user_names.count(tmp)) continue;
        else{
            user_names.insert(tmp);
            accepted_days.push_back(i+1);
        }
    }

    for (auto x: accepted_days) cout << x << endl;
    return 0;
}
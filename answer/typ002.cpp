// Encyclopedia of Parentheses (star_3)

#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;

    if (N%2 != 0){
        return 0;
    }

    vector<string> array;
    for (int i = 0; i < N/2; i++) array.push_back("(");
    for (int i = 0; i < N/2; i++) array.push_back(")");

    vector<string> ans;
    do{
        string tmp;
        bool is_ok = true;
        int l = 0, r = 0;
        for (int i = 0; i < N; i++){
            tmp += array.at(i);
            
            if (array.at(i) == "(") l++;
            else r++;
            if (r > l) is_ok = false;
        }
        if (is_ok) ans.push_back(tmp);
    }
    while (next_permutation(array.begin(), array.end()));

    for (auto x: ans) cout << x << endl;
    return 0;
}
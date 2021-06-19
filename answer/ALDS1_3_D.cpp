// Area on the cross-section Diagram

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MAX_SIZE = 2e5+7;

int main(){

    string S;
    cin >> S;

    vector<char> area;
    vector<int> ans;
    int total = 0;
    double ans_buf = 0;
    for (int i = 0; i < S.size(); i++) {
        char ch = S.at(i);
        bool is_empty = area.empty();

        if (is_empty && ch == '/') continue;
        else{
            if (ch == '\\'){
                area.push_back(ch);
                ans_buf += (double)(area.size()-1) + 0.5;
            }
            else if (ch == '_'){
                ans_buf += (double)(area.size());
            }
            else{
                ans_buf += (double)(area.size()-1) + 0.5;
                area.pop_back();
            }

            is_empty = area.empty();
            if (is_empty){
                ans.push_back((int)ans_buf);
                total += ans_buf;
                ans_buf = 0.;
            }
        }
    }

    cout << total << endl;
    for (int i = 0; i < ans.size(); i++){
        if (i != 0) cout << " ";
        cout << ans.at(i);
    }
    cout << endl;

    return 0;
}
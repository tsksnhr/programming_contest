// Area on the cross-section Diagram

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solver(string S, vector<char> &area, vector<int> &ans, int pos, bool flg, int &mem, double &ans_buf){

    char up, down;
    if (flg){
        up = '/';
        down = '\\';
    }
    else{
        up = '\\';
        down = '/';
    }

    char ch = S.at(pos);
    bool is_empty = area.empty();

    if (is_empty && (ch == up || ch == '_')) return;
    else{
        if (ch == down){
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
            if (!flg){
                if (mem > pos) ans.pop_back();
            }
            ans_buf = 0.;
            if (flg) mem = pos;
        }
    }
}



const int MAX_SIZE = 2e5+7;

int main(){

    string S;
    cin >> S;

    vector<char> area;
    vector<int> ans;
    vector<int> ans_rev;

    int total = 0;
    double ans_buf = 0;
    int mem = 0;
    for (int i = 0; i < S.size(); i++) solver(S, area, ans, i, true, mem, ans_buf);
    area.clear();
//    cerr << "cleared" << endl;
    ans_buf = 0;

    for (int i = S.size()-1; i >= 0; i--) solver(S, area, ans_rev, i, false, mem, ans_buf);

    reverse(ans_rev.begin(), ans_rev.end());
    for (int i = 0; i < ans_rev.size(); i++) ans.push_back(ans_rev.at(i));

    for (auto x: ans) total += x;

    cout << total << endl;
    cout << ans.size();
    for (auto x: ans) cout << " " << x;
    cout  << endl;

    return 0;
}
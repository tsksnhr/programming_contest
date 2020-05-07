#include <bits/stdc++.h>
using namespace std;

int n, cnt, ans_num;
vector<int> a;
vector<int> ans;

int main(){

    cin >> n;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    cnt = 1;
    for (int i=0; i<n; i++){
        if (a.at(i) == cnt){
            ans.push_back(cnt);
            cnt++;
        }
    }

    ans_num = n - ans.size();
    
    if (ans_num == n){
        cout << -1 << endl;    
    }
    else{
        cout << ans_num << endl;
    }
    
    return 0;

}
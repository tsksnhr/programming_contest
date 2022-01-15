#include<bits/stdc++.h>
using namespace std;

void solver(int n, vector<int> &a, int &cnt){

    for(int i = 0; i < n; ++i){
        bool flg = false;
        int min_pos = i;

        for(int j = i; j < n; ++j){
            if(a.at(min_pos) > a.at(j)){
                min_pos = j;
                flg = true;
            }
        }
        if(flg){
            int tmp = a.at(i);
            a.at(i) = a.at(min_pos);
            a.at(min_pos) = tmp;
            ++cnt;
        }
    }
    return;
}

int main(){

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a.at(i);
    }

    int cnt{};
    solver(n, a, cnt);

    for(int i = 0; i < n-1; ++i){
        cout << a.at(i) << " "s;
    }
    cout << a.at(n-1) << endl;
    cout << cnt << endl;

    return 0;
}

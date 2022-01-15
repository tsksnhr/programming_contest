#include<bits/stdc++.h>
using namespace std;

void solver(int n, vector<int> &a, int &cnt){

    bool flg = true;
    while(flg){
        flg = false;

        for(int i = n-1; i > 0; --i){
            if(a.at(i) < a.at(i-1)){
                int tmp;
                tmp = a.at(i);
                a.at(i) = a.at(i-1);
                a.at(i-1) = tmp;
                ++cnt;

                flg = true; 
            }
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
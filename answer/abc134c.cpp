#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, max_num, max_num_2nd, temp;
    cin >> n;
    vector<int> a(n);
    vector<int> ans(n);
    bool flg = false;

    max_num = 0;
    max_num_2nd = 0;
    for (int i=0; i<n; i++){
        cin >> a.at(i);

        if (max_num < a.at(i)){
            max_num = a.at(i); 
            flg = true;
        }
        if ((a.at(i) > max_num_2nd) && (flg == false)){
            max_num_2nd = a.at(i);
        }
        flg = false;
    }

    for (int i=0; i<n; i++){

        if (a.at(i) == max_num){
            ans.at(i) = max_num_2nd;
        }
        else{
            ans.at(i) = max_num;
        }
    }

    for (int i=0; i<n; i++){
        cout << ans.at(i) << endl;
    }
    return 0;
}
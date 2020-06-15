#include <bits/stdc++.h>
using namespace std;

int main(void){

    int num, sum, i, j, ans, temp;
    cin >> num >> sum;

    temp = 0; 
    ans = 0;

    vector<int> A(num), P(num);

    for (i=0; i<num; i++){
        cin >> A.at(i);
    }
    for (i=0; i<num; i++){
        cin >> P.at(i);
    }

    for (i=0; i<num; i++){
        for (j=0; j<num; j++){
            temp = A.at(i) + P.at(j);
            if (temp == sum){
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(void){

    int num, i;
    cin >> num;

    vector<pair<int, string>> ball(num);

    for (i=0; i<num; i++){
        cin >> ball.at(i).first >> ball.at(i).second;
    }

    sort(ball.begin(), ball.end());

    for (i=0; i<num; i++){
        if (ball.at(i).second == "R"){
            cout << ball.at(i).first << endl;;
        }
    }

    for (i=0; i<num; i++){
        if (ball.at(i).second == "B"){
            cout << ball.at(i).first << endl;
        }
    }

    return 0;
}
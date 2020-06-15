#include <bits/stdc++.h>
using namespace std;

int main(){

    int money;
    int cnt_500, cnt_5;
    int happy;

    cin >> money;

    if (money >= 500){
        cnt_500 = money/500;
        money -= 500*cnt_500;
    }
//    else if (money >= 5){
        cnt_5 = money/5;
        money -= 5*cnt_5;
//    }
    
    happy = cnt_500*1000 + cnt_5*5;

    cout << happy << endl;

    return 0;
}
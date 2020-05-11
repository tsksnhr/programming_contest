#include <bits/stdc++.h>
using namespace std;

int A, B;


int main(){

    cin >> A >> B;

    //  sum = A, cnt =1 から始めるとB==1のケース(電源タップがいらないケースが漏れる)
    int sum = 1, cnt = 0;
    while(sum < B){
        sum += (A - 1);
        cnt++;
    }

    cout << cnt << endl;
    return 0;
}
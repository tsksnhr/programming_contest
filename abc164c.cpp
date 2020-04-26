#include <bits/stdc++.h>
using namespace std;

int main(){

    int num, count, i;
    cin >> num;

    string gacha_name;
    map<string, int> gacha;

    count=0;

    for (i=0; i<num; i++){
        cin >> gacha_name;

         if (gacha[gacha_name] == 0){
             gacha[gacha_name] = 1;
             count++;
         }
         else{
             continue;
         }
    }

    cout << count << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(void){

    int i, size, count;
    string s;
    cin >> s;

    size = 0;
    count = 0;

    size = s.size();

    // ここの処理はcoutn()のほうが簡単
    for (i=0; i<size; i++){
        if (s.at(i) == '1'){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
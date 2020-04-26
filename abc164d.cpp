#include <bits/stdc++.h>
using namespace std;

int main(){

    string snum;
    cin >> snum;

    int64_t i, j, size;
    int64_t count;

    size = snum.size();

    string s_buf;
    uint64_t temp;
    count = 0;

    for (i=0; i<size; i++){
        
        s_buf = snum.at(i);
        temp = stoull(s_buf);
        if (temp%2019 == 0){
            count++;
        }

        for (j=i+1; j<size; j++){
            s_buf += snum.at(j);
            temp = stoull(s_buf);
            if (temp%2019 == 0){
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}

// hadn't get AC yet...

#include <bits/stdc++.h>
using namespace std;
const int DIGIT = 2e5;

int main(){

    int N;
    cin >> N;
    bitset<DIGIT> bit_num;
//    const int DIGIT = N;
    cin >> bit_num;
    bitset<DIGIT> bit_buf;

    int digit = 0;
    int temp = N;
    while(temp != 0){
        temp /= 2;
        digit++;
    }

    vector<int> ans(N);
    int cnt = 0, mod = 0, popcnt = 0, dnum = 0;
    for(int i=N-digit; i<N; i++){
        int ans_buf = 0;
        bit_buf = bit_num;
        bit_buf.flip(i);
        popcnt = bit_buf.count();

        while(bit_buf.any()){
            dnum = bit_buf.to_ullong();
            cout << dnum;
            dnum %= popcnt;
            bitset<DIGIT> bit_buf(dnum);
            popcnt = bit_buf.count();
            ans_buf++;
        }

        ans.at(cnt) = ans_buf;
        cnt++;
    }

    for(auto x: ans) cout << x << endl;
    return 0;
}
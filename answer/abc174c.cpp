// not solved...

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main(){
    
    ull K;
    cin >> K;
    ull buf = K;

    if(K%2 == 0){
        cout << -1;
        return 0;
    }

    if(K==0){
        cerr << "why?" << endl;
        return 0;
    }

    bool flg = false;
    int cnt = 1;
    string s{}, ref{};
    while(true){
        s = to_string(buf);
        size_t size = s.size();
        if(size != ref.size()){
            ref = "";
            for(int i=0; i<size; i++) ref += "7";
        }
        cerr << "debug > buf: " << buf << endl;
        cerr << "debug > s: " << s << endl;
        cerr << "debug > size: " << size << endl;
        cerr << "debug > ref: " << ref << endl;
        if(s == ref){
            flg = true;
            break;
        }
        cnt++;
//        buf = stoi(s);
        buf = cnt*K;
    }

    if(flg) cout << ref.size();
    else cout << -1;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b;
    cin >> a >> b;

    int c;
    string as, bs, cs;
    as = to_string(a);
    bs = to_string(b);
    cs = as + bs;
    c = stoi(cs);

    for (int i=0; i<100100+1; i++){
        int temp;
        temp = i*i;
        if (temp == c) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
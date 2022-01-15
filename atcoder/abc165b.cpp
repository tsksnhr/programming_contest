#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int64_t X;
    cin >> X;

    int64_t money=100;
    int64_t year=0;

    while (money<X){
        money *= 1.01;
        year++;
    }

    cout << year << endl;
    return 0;
}
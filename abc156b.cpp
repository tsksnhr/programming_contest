#include <bits/stdc++.h>
using namespace std;

int main(){

    int N, K;
    cin >> N >> K;

    int digit=1, temp=N;

    while (temp>=K){
        temp/=K;
        digit++;
    }

    cout << digit << endl;
    return 0;
}
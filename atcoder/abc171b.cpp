#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    int N, K;
    cin >> N >> K;
    vector<int> p(N);
    for (int i=0; i<N; i++) cin >> p.at(i);

    sort(p.begin(), p.end());

    int sum = 0;
    for (int i=0; i<K; i++){
        sum += p.at(i);
    }

    cout << sum << endl;
    return 0;
}
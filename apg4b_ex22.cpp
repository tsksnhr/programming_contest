#include <bits/stdc++.h>
using namespace std;

int main(void){

    int N, i;
    cin >> N;

    vector<pair<int, int>> p(N);
    vector<int> temp(N);

    for (i=0; i<N; i++){
        cin >> p.at(i).second >> p.at(i).first;
    }

    sort(p.begin() ,p.end());

    for (i=0; i<N; i++){
        cout << p.at(i).second << ' ' << p.at(i).first << endl;
    }

    return 0;
}
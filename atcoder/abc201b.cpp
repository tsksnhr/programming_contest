// Do you know the second highest mountain?

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

    int N;
    cin >> N;
    vector<pair<int, string>> mountain(N);
    for (int i = 0; i < N; i++){
        pair<int, string> p;
        cin >> p.second >> p.first;
        mountain.at(i) = p;
    }

    sort(mountain.begin(), mountain.end());
    
    cout << mountain.at(N-2).second << endl;
    return 0;
}
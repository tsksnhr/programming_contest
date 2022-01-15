#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    vector<vector<int>> road(n);

    for (int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        road.at(a).push_back(b);
        road.at(b).push_back(a);
    }

    for (int i=0; i<n; i++){
        cout << road.at(i).size() << endl;
    } 
    return 0;
}
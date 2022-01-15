#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, d;
    cin >> n >> d;

    vector<vector<int>> x(n, vector<int>(d));
    for (int i=0; i<n; i++){
        for (int j=0; j<d; j++){
            cin >> x.at(i).at(j);
        }
    }

    int cnt = 0;
    double distance = 0, distance_0 = 0, distance_1 = 0;
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            for (int k=0; k<d; k++){
                distance_0 += (x.at(i).at(k) - x.at(j).at(k))*(x.at(i).at(k) - x.at(j).at(k));
            }
            distance = sqrt(distance_0);
            if (floor(distance) == distance){
                cnt++;
            }
            distance_0 = 0;
            distance = 0;
        }
    }

    cout << cnt << endl;
    return 0;
}
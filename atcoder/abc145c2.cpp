#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;
    vector<int> permutation(N);
    vector<pair<double, double>> dataset;
    for (int i = 0; i < N; i++){
        pair<double, double> data;
        cin >> data.first >> data.second;
        dataset.push_back(data);
        permutation.at(i) = i;
    }

    double ans = 0;
    int cnt = 0;
    while (true){
        for (int i = 0; i < N-1; i++){
            int start, goal;
            double x_diff, y_diff, dist;
            
            start = permutation.at(i);
            goal = permutation.at(i+1);

            x_diff = dataset.at(goal).first - dataset.at(start).first;
            x_diff = pow(x_diff, 2);
            y_diff = dataset.at(goal).second - dataset.at(start).second;
            y_diff = pow(y_diff, 2);
            dist = sqrt(x_diff + y_diff);
            ans += dist;
        }
        cnt++;
        if (!next_permutation(permutation.begin(), permutation.end())) break;
    }

    ans /= cnt;
    cout << fixed << setprecision(7);
    cout << ans << endl;
    return 0;
}
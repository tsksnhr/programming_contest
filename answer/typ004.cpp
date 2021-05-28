// Cross Sum
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    int H, W;
    cin >> H >> W;
    vector<vector<int>> A(H, vector<int>(W));
    for (int h = 0; h < H; h++){
        for (int w = 0; w < W; w++){
            cin >> A.at(h).at(w);
        }
    }

    vector<int> sum_columns(W);
    vector<int> sum_rows(H);
    for (int h = 0; h < H; h++){
        for (int w = 0; w < W; w++){
            sum_rows.at(h) += A.at(h).at(w);
        }
    }
    for (int w = 0; w < W; w++){
        for (int h = 0; h < H; h++){
            sum_columns.at(w) += A.at(h).at(w);
        }
    }

    vector<vector<int>> ans(H, vector<int>(W));
    for (int h = 0; h < H; h++){
        for (int w = 0; w < W; w++){
            ans.at(h).at(w) = sum_rows.at(h) + sum_columns.at(w) - A.at(h).at(w); 
        }
    }

    for (int h = 0; h < H; h++){
        for (int w = 0; w < W; w++){
            cout << ans.at(h).at(w) << " "; 
        }
        cout << endl;
    }

    return 0;
}
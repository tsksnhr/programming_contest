#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

int N, M;
vector<vector<long long>> A(105, vector<long long>(105));
P group;

int main(){

    cin >> N >> M;
    int i, j;
    for (i=0; i<N; i++){
        for (j=0; j<M; j++){
            cin >> A.at(i).at(j);
        }
    }

    int k;
    long long point = 0, sum = 0, p_mem = 0, sum_temp = 0;
    //  選曲グループの総当たり
    for (i=0; i<M; i++){
        for (j=i+1; j<M; j++){
            group.first = i;
            group.second = j;

            for (k=0; k<N; k++){
                point = max(A.at(k).at(group.first), A.at(k).at(group.second));
                sum_temp += point;
            }
            sum = max(sum, sum_temp);
            sum_temp = 0;
        }
    }

    cout << sum << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){

    int N, M;
    cin >> N >> M;

    int ac_num = 0, pena_num = 0;
    pair<int, string> p;
    //map<pair<int, string>, int> m;
    vector<int> ac_flg(N);
    vector<int> pena(N);

    for (int i=0; i<M; i++){
        int tmp_i;
        cin >> tmp_i;
        string tmp_s;
        cin >> tmp_s;

        p.first = tmp_i;
        p.second = tmp_s;

        if ((p.second == "AC") && (ac_flg.at(p.first-1) == 0)){
            //m[p]++;
            ac_flg.at(p.first - 1) = 1;
            ac_num++;
        }
        if ((p.second == "WA") && (ac_flg.at(p.first-1) == 0)){
            //m[p]++;
            pena.at(p.first-1) += 1;
        }
    }

    //  ACがゼロ回の場合は、何回WAでもペナルティなし
    for (int i=0; i<N; i++){
        if (ac_flg.at(i) == 1){
            pena_num += pena.at(i);
        }
    }

    cout << ac_num << " " << pena_num << endl;
    return 0;
}
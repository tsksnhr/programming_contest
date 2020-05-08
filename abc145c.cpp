#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

void permutation(int pos, int num);

int n;
vector<P> pos(10);
vector<int> pmt(10);
vector<vector<int>> pvec;
vector<int> used(10);

int main(){

    cin >> n;
    int i;
    for (i = 1; i <= n; i++){
        int x, y;
        cin >> x >> y;
        pos.at(i) = P(x, y);
    }

    permutation(0, n);
    
    /*
    for (i=0; i<pvec.size(); i++){
        for (int j=0; j<n; j++){
            cout << pvec.at(i).at(j) << " ";
        }
        cout << endl;
    }
    */
    
    int x_diff_tmp = 0, y_diff_tmp = 0;
    double x_diff = 0, y_diff = 0, diff = 0;
    int j;
    for (i=0; i<pvec.size(); i++){
        for (j=1; j<n; j++){
            x_diff_tmp = pos.at(pvec.at(i).at(j)).first - pos.at(pvec.at(i).at(j-1)).first;
            x_diff = x_diff_tmp*x_diff_tmp;
            y_diff_tmp = pos.at(pvec.at(i).at(j)).second - pos.at(pvec.at(i).at(j-1)).second; 
            y_diff = y_diff_tmp*y_diff_tmp;
            diff += sqrt(x_diff + y_diff);

            /*
            cout << "x = " << pos.at(pvec.at(i).at(j-1)).first << "\ty = " << pos.at(pvec.at(i).at(j-1)).second << endl;
            cout << "x = " << pos.at(pvec.at(i).at(j)).first << "\ty = " << pos.at(pvec.at(i).at(j)).second << endl;
            cout << "i: " << i << "\tdiff = " << diff << endl;
            */

        }
    }

    double ave;
    ave = diff/pvec.size();
    
//    cout << "pvec.size() = " << pvec.size() << endl;        //  debug
    cout << fixed << setprecision(15);
    cout << ave << endl;
    return 0;
}

void permutation(int pos, int num){

    if (num == pos){
        pvec.push_back(pmt);
        return;
    }

    int i;
    for (i = 0; i < num; i++){
        if (used.at(i) == 0){
            pmt.at(pos) = i+1;
            used.at(i) = 1;
            permutation(pos + 1, num);
            used.at(i) = 0;
        }
    }
}
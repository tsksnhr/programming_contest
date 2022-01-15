// Disjoint Union Find Tree

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class DisjointSet{

    vector<int> rank;
    vector<int> parent;

    public:
        void makeSet(int N){
            for (int i = 0; i < N; i++){
                this->rank.push_back(0);
                this->parent.push_back(i);
            }
        }

        int findSet(int x){
            if (parent.at(x) != x) parent.at(x) = findSet(parent.at(x));
            return parent.at(x);
        }

        void EditParent(int x, int y){
            if (rank.at(x) < rank.at(y)){
                parent.at(x) = y;
                rank.at(x)++;
            }
            else{
                parent.at(y) = x;
                rank.at(y)++;
            }
        }

        void unite(int x, int y){
            EditParent(findSet(x), findSet(y));
            return;
        }

        bool same(int x, int y){
            int rx, ry;
            rx = findSet(x);
            ry = findSet(y);

            if (rx == ry) return true;
            else return false;
        }

        void TestPrint(){
            cerr << "rank" << endl;
            for (auto x: rank) cerr << x << " ";
            cerr << endl;
            cerr << "parent" << endl;
            for (auto x: parent) cerr << x << " ";
            cerr << endl;
            return;
        }
};

int main(){

    int N, Q;
    cin >> N >> Q;

    DisjointSet dc_set;
    dc_set.makeSet(N);
    
    for (int i = 0; i < Q; i++){
        int command, x, y;
        cin >> command >> x >> y;

        if (command == 0){
            dc_set.unite(x, y);
        }
        else{
            bool flg;
            flg = dc_set.same(x, y);

            if (flg) cout << 1 << endl;
            else cout << 0 << endl;
        }

//        dc_set.TestPrint();
    }

    return 0;
}

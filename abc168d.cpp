#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

const int INF = 1e7;

int main(){

    int n, m;
    cin >> n >> m;
    // ある点からある点への経路を格納する二次元配列(点の数nだけ行があり、点から点への経路数は最大しかわからないのでn行0列の二次元配列)
    // aからb, bからaの両方の方向を検討するために順番を入れ替えて二次元配列に代入する
    // あらかじめ二次元配列をn*nで用意してat(a).at(b)とした場合、先に0がキューに格納されると距離がその後更新されなくなる
    vector<vector<int>> graph(n);
    for (int i=0; i<m; ++i){
        int a, b;
        cin >> a >> b;
        // 配列の位置と入力の数値を統一する
        --a;
        --b;
        // aからb, bからaの両方の方向を検討するために順番を入れ替えて二次元配列に代入する
        graph.at(a).push_back(b);
        graph.at(b).push_back(a);
        /*
        // これはNG
        graph.at(a).at(b);
        graph.at(b).at(a);
        */
    }

    // BFSのためにキューを用意する
    queue<int> q;
    // 原点からの距離とどの部屋からその部屋に行けるかの位置を示す配列を用意
    vector<int> dist(n, INF);
    vector<int> pre(n, -1);

    // 原点への距離を0で初期化
    dist.at(0) = 0;
    // キューに原点を始点として進むことのできる部屋を追加
    q.push(0);

    while (!q.empty()){

        // キューの先頭データをコピー
        int v = q.front();
        // 先頭データを削除
        q.pop();

        // キューに保存された場所から到達できる部屋について距離を確定させる
        for (auto u: graph.at(v)){
            // すでに距離が更新されている場合は、何もしない
            if (dist.at(u) != INF){
                continue;
            }
            // 点vから到達できる点uへの距離は、原点から点vまで到達するまでにかかる距離+1となる
            dist.at(u) = dist.at(v) + 1;
            // 点uにつながる点を記録
            pre.at(u) = v;
            // 点vから到達できる点uをキューに格納し、点uから再びBFSを実施
            q.push(u); 
        }
    }

    cout << "Yes" << endl;
    for (int i=1; i<n; ++i){
        int ans = pre.at(i);
        ++ans;
        cout << ans << endl;
    }
    return 0;
}


// 二次元配列の宣言方法の違い
// 10行0列の二次元配列の宣言方法
/*
int test_func(){

    int a = 3, b = 2;

    vector <int> to[10];
    to[a].push_back(b);
    to[a].push_back(a);

    vector<vector<int>> test(10);
    test.at(a).push_back(b);
    test.at(a).push_back(a);

    cout << "to is ..." << endl;
    for (auto x: to[3]){
        cout << x << endl;
    }
    cout << "test is ..." << endl;
    for (auto x: test.at(3)){
        cout << x << endl;
    }
    return 0;
}
*/
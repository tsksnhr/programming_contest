// Range Search (kD Tree)
// TODO: sole

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Node{

    public:
        int position;
        int parent, left, right;
};

class Point{

    public:
        int id;
        int x, y;
};

int Make2DTree(vector<Node> NodeArray, vector<Point> PointArray, int l, int r, int depth, int now_pos){

    if (l >= r) return -1;

    int mid;
    if (depth%2 == 0){
        int mid = (l + r)/2;
        sort(PointArray.at(l).x, PointArray.at(mid + 1).x);
        sort(PointArray.at(mid + 1), PointArray.at(r + 1));
    }
    else{
        int mid = (l + r)/2;
        sort(PointArray.at(l).y, PointArray.at(mid + 1).y);
        sort(PointArray.at(mid + 1).x, PointArray.at(r + 1).y);
    }

    int pos = now_pos;
    if (depth%2 == 0){
        NodeArray.at(pos).position = mid;
        NodeArray.at(pos).left = Make2DTree(NodeArray, PointArray, )
    }
    else{

    }

    return pos;
}


int main(){

    int N;
    scanf("%d", &N);
    vector<Node> NodeArray(N);
    vector<Point> PointArray(N);
}
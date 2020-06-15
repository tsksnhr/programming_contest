#include <bits/stdc++.h>
using namespace std;

int main(){

    int N, M, Q;
    cin >> N >> M >> Q;

    int i;
    int a, b, c, d;
    int sum=0;

    vector<tuple<int, int, int, int>> input;
    vector<int> array(N);
    array.at(N-1) = M;

    for (i=0; i<Q; i++){
        cin >> a >> b >> c >> d;
        input.push_back(make_tuple(d, a, b, c));
    }
    sort(input.begin(), input.end());

    for (tuple<int, int, int, int> t: input){
        array.at(get<1>(t)) = array.at(get<2>(t)) - get<3>(t);

        if (array.at(N-1)>M){
            
        }
    }



   
}
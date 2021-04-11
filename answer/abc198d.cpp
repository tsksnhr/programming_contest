#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// TODO: solve

void solver(ll N, ll &ans){

}

ll tiny_floor(ll num){

    string s = "";
    for (ll i = 0; i < num; i++) s += "9";

    return stoll(s);
}

int main(){

    string a, b, c;
    cin >> a >> b >> c;

    map<ll, char> alphas; 
    for (ll i = 0; i < a.size(); i++) alphas[a.at(i)]++;
    for (ll i = 0; i < b.size(); i++) alphas[b.at(i)]++;
    for (ll i = 0; i < c.size(); i++) alphas[c.at(i)]++;

    if (alphas.size() > 10){
        cout << "UNSOLVABLE" << endl;
        return 0;
    }

    vector<bool> is_used(10, false);
    ll target = 0;
    map<char, ll> num_dist;
    for (auto p: alphas){
        for (ll i = 0; i < 10; i++){
            if (!is_used.at(i)){
                num_dist[p.first] = i;
                is_used.at(i) = true;
            }
        } 
    }


    return 0;
}
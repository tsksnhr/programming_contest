#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll N; 
    cin >> N;
    vector<pair<ll, ll>> coordinate;
    
    for (ll i = 0; i < N; i++){
        pair<ll, ll> tmp;
        cin >> tmp.first >> tmp.second;
        coordinate.push_back(tmp);
    }
    sort(coordinate.begin(), coordinate.end());

    /*
    cerr << endl;
    for (auto x: coordinate) cerr << x.first << " " << x.second << endl;
    */

   for (ll i = 0; i < N; i++){
       for (ll j = i + 1; j < N; j++){
           for (ll k = j + 1; k < N; k++){
               auto left = coordinate.at(i);
               auto mid = coordinate.at(j);
               auto right = coordinate.at(k);

               double x_dif = mid.first - left.first;
               double y_dif = mid.second - left.second;
               double slope = y_dif/x_dif;

               if (x_dif == 0){
                   if (right.first == mid.first){
                       cout << "Yes" << endl;
                       return 0;
                   }
               }
               else{
                   double y_expected = slope*(right.first - mid.first) + mid.second;
                   if (right.second == y_expected){
//                       cerr << right.second << " " << slope*(right.first - mid.first) << endl;
                       cout << "Yes" << endl;
                       return 0;
                   }
               }
           } 
       }
   }


    cout << "No" << endl;
    return 0;
}
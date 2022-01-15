#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

	int N;
	cin >> N;

	vector<pair<int, int>> dots(N);
	for (int i = 0; i < N; i++){
		int x, y;
		cin >> x >> y;

		dots.at(i) = make_pair(x, y);
	}

	double max_dist = 0;
	for (int i = 0; i < N; i++){
		for (int j = i+1; j < N; j++){
			double dist, x_dist, y_dist;
			
			x_dist = dots.at(i).first - dots.at(j).first;
			x_dist *= x_dist;

			y_dist = dots.at(i).second - dots.at(j).second;
			y_dist *= y_dist;

			dist = x_dist + y_dist;
			dist = sqrt(dist);

			max_dist = max(max_dist, dist);
		}
	}

	cout << setprecision(15) << endl;
	cout << max_dist << endl;
	return 0;
}
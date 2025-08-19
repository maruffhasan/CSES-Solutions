#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main () {
	int n; cin >> n;
	vector<int> x(n);
	for (int i = 0; i < n; i++) cin >> x[i];

	ll res = 0;
	for (int i = 1; i < n; i++) {
		res += max(x[i], x[i-1]) - x[i];
		x[i] = max(x[i], x[i-1]);
	}
	cout << res << "\n";
}	
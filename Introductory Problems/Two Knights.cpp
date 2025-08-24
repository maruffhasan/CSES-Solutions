#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main () {
	ll k; cin >> k;
	vector<ll> v = {0, 6, 28};
	for (ll n = 1; n <= k; n++) {
		if (n < 4) {
			cout << v[n-1] << "\n";
		} else {
			cout << n*n*(n*n-1)/2 - (4*(n-2)*(n-4) + 10*(n-2) + 2*(n-4) + 4) << "\n";
		}
	}
}	
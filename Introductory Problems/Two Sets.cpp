#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main () {
	ll n; cin >> n;
	ll sum = n*(n+1)/2;
	if (sum%2) {
		cout << "NO\n";
	} else {
		sum /= 2;
		cout << "YES\n";
		vector<int> a, b;
		for (int i = n; i >= 1; i--) {
			if (sum > 0 && i <= sum) {
				sum -= i;
				a.push_back(i);
			} else {
				b.push_back(i);
			}
		}

		cout << a.size() << "\n";
		for (int x : a) cout << x << " ";
		cout << "\n";

		cout << b.size() << "\n";
		for (int x : b) cout << x << " ";
		cout << "\n";
	}

}	
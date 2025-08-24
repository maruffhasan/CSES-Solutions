#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main () {
	int tc; cin >> tc;
	while (tc--) {
		int x, y; cin >> x >> y;
		
		ll t = max(x, y);
		int a = 1, b = 1;
		t%2 == 0 ? b = -1 : a = -1;
		cout << t*t - (t-1) +  a*(t-y) + b*(t-x) << "\n";
	}
}	
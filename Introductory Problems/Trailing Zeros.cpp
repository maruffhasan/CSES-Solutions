#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main () {
	ll n; cin >> n;
	ll cnt = 0;
	ll i = 5;
	while (n/i) {
		cnt += n / i;
		i *= 5;
	}

	cout << cnt << "\n";
}	
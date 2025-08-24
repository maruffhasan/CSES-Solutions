#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int mod = 1e9 + 7;

ll bpow(ll a, ll b) {
	ll res = 1;
	while (b) {
		if (b&1) (res *= a) %= mod;
		(a *= a) %= mod;
		b >>= 1;
	}
	return res;
}

int main () {
	int n; cin >> n;
	cout << bpow(2, n) << "\n";
}	
#include <bits/stdc++.h>

using namespace std;

set<string> res;
string s;
vector<bool> taken;

void f (string sub = "") {
	if (sub.size() == s.size()) {
		res.insert(sub);
		return;
	}

	for (int i = 0; i < s.size(); i++) {
		if (!taken[i]) {
			taken[i] = 1;
			f(sub+s[i]);
			taken[i] = 0;
		}
	}
}

int main () {
	cin >> s;
	taken.assign(s.size(), 0);
	f();
	cout << res.size() << "\n";
	for (auto x : res) cout << x << "\n";
}	
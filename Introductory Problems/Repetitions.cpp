#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main () {
	string s; cin >> s;
	int l = 0;
	int cnt = 0;
	for (int r = 0; r < s.size(); r++) {
		while (s[r] != s[l]) {
			l++;
		}

		cnt = max(cnt, r-l+1);
	}
	
	cout << cnt << "\n";
}	
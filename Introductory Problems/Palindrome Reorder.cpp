#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main () {
	string s; cin >> s;
	vector<int> cnt(26);
	for (char ch : s) {
		cnt[ch-'A']++;
	}

	int oddcnt = 0;
	for (int i = 0; i < 26; i++) oddcnt += cnt[i]%2;

	if (oddcnt > 1) {
		cout << "NO SOLUTION\n";
	} else {
		for (int i = 0; i < 26; i++) {
			for (int j = 0; j < cnt[i]/2; j++) {
				cout << char('A' + i);
			}
		}

		if (oddcnt) {
			for (int i = 0; i < 26; i++) cnt[i]%2 ? cout << char(i+'A') : cout << "";
		}

		for (int i = 25; i >= 0; i--) {
			for (int j = 0; j < cnt[i]/2; j++) {
				cout << char('A' + i);
			}
		}
	}
}	
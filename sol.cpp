#include <bits/stdc++.h>

using namespace std;

void test_case() {
	long long n;
	cin >> n;
	int cnt2 = 0, cnt3 = 0, cnt5 = 0;
	while(n % 2 == 0) {
		n /= 2;
		++cnt2;
	}
	while(n % 3 == 0) {
		n /= 3;
		++cnt3;
	}
	while(n % 5 == 0) {
		n /= 5;
		++cnt5;
	}
	if(n != 1) {
		cout << -1;
	}
	else {
		cout << cnt2 + cnt3 * 2 + cnt5 * 3;
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T;
	cin >> T;
	for(int nr = 1; nr <= T; ++nr) {
		test_case();
	}
	return 0;
}

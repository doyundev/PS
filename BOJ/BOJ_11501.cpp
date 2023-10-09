// 백준 11501번: 주식
// 가장 높게 상승한 시점에서 팔면 이득이므로 미래에서 과거로 순회한다.
// 순회를 하면서 가장 높은 가격보다 낮은 가격을 발견하면 총 수익에 (가장 높은 가격 - 현재가격 ) 을 더하여 차액을 수익에 더한다.
#include <bits/stdc++.h>
using namespace std;

int t, n;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> t;
	while (t-- > 0) {
		cin >> n;
		vector<int> v;
		for (int i = 0; i < n; ++i) {
			int tmp; cin >> tmp;
			v.push_back(tmp);
		}

		long long ans = 0;
		long long maxPrice = 0;
		for (int i = n - 1; i >= 0; --i) {
			if (v[i] > maxPrice) {
				maxPrice = v[i];
			}
			else {
				ans += (maxPrice - v[i]);
			}
		}

		cout << ans << '\n';
	}
}
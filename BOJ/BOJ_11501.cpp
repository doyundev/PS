// ���� 11501��: �ֽ�
// ���� ���� ����� �������� �ȸ� �̵��̹Ƿ� �̷����� ���ŷ� ��ȸ�Ѵ�.
// ��ȸ�� �ϸ鼭 ���� ���� ���ݺ��� ���� ������ �߰��ϸ� �� ���Ϳ� (���� ���� ���� - ���簡�� ) �� ���Ͽ� ������ ���Ϳ� ���Ѵ�.
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
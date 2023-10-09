#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>& a, pair<int,int>& b) {
	
	// ���� ������ �տ� �ִ� ���
	if (a.first != b.first) {
		return a.first < b.first;
	}

	// ������ ������ �ڿ� �ִ� ��� ( ���� �Ǵ� ��� )
	return a.second > b.second;
}

int n;
vector<pair<int,int>> v;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; ++i) {
		int sm, sd, dm, dd;
		cin >> sm >> sd >> dm >> dd;
		int src = (sm * 100 + sd);
		int des = (dm * 100 + dd);
		v.emplace_back(src, des);
	}

	int t = 301;
	int ans = 0;

	while (t < 1201)
	{
		int nxt_t = t; // �̹��� �߰��� ������ ���� ����� �ð�
		for (int i = 0; i < n; ++i) {
			if (v[i].first <= t && v[i].second > nxt_t)
				nxt_t = v[i].second;
		}

		// �ð� t ���� �̵� �Ұ�����
		if (nxt_t == t) {
			cout << 0;
			return 0;
		}

		ans++;
		t = nxt_t;
	}

	cout << ans;
}
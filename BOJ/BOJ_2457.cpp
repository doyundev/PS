#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>& a, pair<int,int>& b) {
	
	// 시작 지점이 앞에 있는 경우
	if (a.first != b.first) {
		return a.first < b.first;
	}

	// 끝나는 지점이 뒤에 있는 경우 ( 오래 피는 경우 )
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
		int nxt_t = t; // 이번에 추가할 꽃으로 인해 변경된 시간
		for (int i = 0; i < n; ++i) {
			if (v[i].first <= t && v[i].second > nxt_t)
				nxt_t = v[i].second;
		}

		// 시간 t 에서 이동 불가능함
		if (nxt_t == t) {
			cout << 0;
			return 0;
		}

		ans++;
		t = nxt_t;
	}

	cout << ans;
}
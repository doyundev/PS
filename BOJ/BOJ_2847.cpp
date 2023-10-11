// 백준 2847번 게임을 만든 동준이
// 이전 스테이지가 다음 스테이지보다 점수가 낮게 만들어야한다
// 점수 조절은 감소 밖에 없으므로 이전 스테이지가 현재 스테이지보다 점수가 높으면 이전 스테이지의 점수를 감소 시키는 방식으로 구현했다.
// 점수를 최소한으로 감소 시켜야하는게 조건이기 때문에 이웃한 스테이지 간의 점수차를 1로 만들게 하면 된다.

#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int n;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	v = vector<int>(n, 0);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}

	int answer = 0;
	for (int i = n - 1; i >= 1; --i) {
		int next_stage = v[i];
		int &current_stage = v[i - 1];

		if (next_stage <= current_stage) {
			int diff = current_stage - next_stage + 1;
			current_stage -= diff;

			// 1 만큼 감소 시키는 것이 한 번이므로 감소 시킨 점수만큼 횟수를 더함
			answer += diff;
		}
	}

	cout << answer;
}
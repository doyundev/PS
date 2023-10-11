// ���� 2847�� ������ ���� ������
// ���� ���������� ���� ������������ ������ ���� �������Ѵ�
// ���� ������ ���� �ۿ� �����Ƿ� ���� ���������� ���� ������������ ������ ������ ���� ���������� ������ ���� ��Ű�� ������� �����ߴ�.
// ������ �ּ������� ���� ���Ѿ��ϴ°� �����̱� ������ �̿��� �������� ���� �������� 1�� ����� �ϸ� �ȴ�.

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

			// 1 ��ŭ ���� ��Ű�� ���� �� ���̹Ƿ� ���� ��Ų ������ŭ Ƚ���� ����
			answer += diff;
		}
	}

	cout << answer;
}
// ���� 1541��: �Ҿ���� ��ȣ
// https://www.acmicpc.net/problem/1541

// ���� ���� ���� ����� ���ؼ� ū ���� ���� �������� ��� �ǵ��� ��ȣ�� ��ġ�Ѵ�.
// ����, - �� ������ ������ �������� ��� �������� �ٲپ� �ִ� ������ �����Ѵ�.
// 55-50+40 => 55-(50+40) => 55-50-40

#include <bits/stdc++.h>
using namespace std;

string str;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> str;

	// �Է��� ����� �� �ִ� ������ �����Ѵ�
	int num = 0;
	bool minus = false;
	int ans = 0;
	
	for (int i = 0; i < str.size(); ++i) {
		if (isdigit(str[i])) {
			num = (num * 10) + (str[i]-'0');
		}
		else {
			num = minus ? -num : num;
			ans += num;
			num = 0;
			if (str[i] == '-') {
				minus = true;
			}
		}
	}

	num = minus ? -num : num;
	ans += num;

	cout << ans;
}
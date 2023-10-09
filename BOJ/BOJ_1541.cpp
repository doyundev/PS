// 백준 1541번: 잃어버린 괄호
// https://www.acmicpc.net/problem/1541

// 가장 작은 값을 만들기 위해서 큰 값을 빼는 방향으로 계산 되도록 괄호를 배치한다.
// 따라서, - 가 등장한 이후의 덧셈들은 모두 뺄셈으로 바꾸어 주는 식으로 구현한다.
// 55-50+40 => 55-(50+40) => 55-50-40

#include <bits/stdc++.h>
using namespace std;

string str;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> str;

	// 입력을 계산할 수 있는 값으로 정제한다
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
// 백준 1439번 뒤집기
// 연속된 수 한 그룹을 뒤집을 때 1회 카운트 된다. 연속된 수들은 서로 달라도 되지만 뒤집어봤자 의미가 없다.
// 따라서 같은 숫자 그룹을 뒤집는 방식으로 구현을 했다.
// 1로만 이루어진 그룹, 0으로만 이루어진 그룹 수를 세고 둘 중 그룹 수가 적은 쪽을 모두 뒤집는 수를 세면 최소한으로 뒤집으면서 모두 같은 숫자로 만들 수 있다.

#include <bits/stdc++.h>
using namespace std;

int group_0 = 0;
int group_1 = 0;
string s;

int main() {
	cin >> s;
	if (s.length() == 0) {
		cout << 0;
		return 0;
	}

	char prevNum = s[0];
	for (unsigned int i= 1; i < s.length(); ++i) {
		if (s[i] != prevNum) {
			if (prevNum == '0') group_0++;
			else group_1++;
		}

		prevNum = s[i];
	}

	if (prevNum == '0') group_0++;
	else group_1++;

	cout << min(group_0, group_1);
}

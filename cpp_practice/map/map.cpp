#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

	vector<int> tmp = { 1, 2, 3, 4, 5 };
	int res = 0;
	for_each(tmp.begin(), tmp.end(), [&res](int a) {cout << a << " "; cout << "\n"; res += a; });
	cout << res << '\n';
	return 0;
}
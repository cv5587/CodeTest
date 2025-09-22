#include<bits/stdc++.h>

using namespace std;
int result,n, temp,cnt;
int mod = 11;
vector<int> v;


void go(int idx, int sum) {
	if (idx == n) {
		result = max(result, sum % mod);
		cnt++;
		return;
	}
	go(idx + 1, sum + v[idx]);
	go(idx + 1, sum);
}
int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	go(0, 0);
	cout << result << '\n';
	cout << cnt << '\n';

	return 0;
}
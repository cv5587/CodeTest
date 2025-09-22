#include <bits/stdc++.h>
using namespace std;
int ret,N;
vector<pair<int, int>> v;
int main()
{
	int from, to;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> from >> to;
		v.push_back({ to,from });
	}
	sort(v.begin(), v.end());
	from = v[0].second;
	to = v[0].first;
	for (int i = 0; i < N; i++)
	{
		if (v[i].second < to)continue;
		from = v[i].second;
		to = v[i].first;
		ret++;
	}
	cout << ret << '\n';
	return 0;
}
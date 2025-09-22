
#include <bits/stdc++.h>

using namespace std;
int n, d, p;
vector<pair<int, int>> v;

bool cmpSecond(const std::pair<int, int>& a, const std::pair<int, int>& b) {
	return a.second < b.second;  // ¿À¸§Â÷¼ø
}

int main()
{
	cin >> n ;

	for (int i = 0; i < n; i++)
	{
		cin >> p >> d;
		v.push_back({ p,d });
	}
	sort(v.begin(), v.end(), cmpSecond);

	int time = 0;
	int pay = 0;

	priority_queue<int,vector<int>,greater<int>> pq;
	for (auto& iter : v)
	{
		pq.push(iter.first);//µ·
		if (pq.size() > iter.second)
			pq.pop();
	}

	int Result = 0;
	while (!pq.empty())
	{
		Result += pq.top();
		pq.pop();
	}
	cout << Result;
	return 0;
}
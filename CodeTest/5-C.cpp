#include "bits/stdc++.h"	
using namespace std;
int N;
typedef pair<int, int> PAIR;
vector<PAIR> v;
priority_queue<int, vector<int>, greater<int>> pq;
int main()
{
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		PAIR step;
		cin >> step.first >> step.second;
		v.push_back(step);
	}
	sort(v.begin(), v.end());

	int result = 0;
	for (int i = 0; i < v.size(); i++)
	{
		result += v[i].second;
		pq.push(v[i].second);
		if (pq.size() > v[i].first)
		{
			result -= pq.top();
			pq.pop();
		}
	}
	
	cout << result << "\n";

	return 0;
}
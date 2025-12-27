#include <bits/stdc++.h>
//14469น้มุ
using namespace std;
int N;
struct cow
{
	int intime, checktime;
	bool operator<(const cow& c) const
	{
		return intime > c.intime;
	}
};

int main()
{
	cin >> N;
	priority_queue<cow> pq;

	int Result =0;

	for (int i = 0; i < N; i++)
	{
		cow	c;
		cin >> c.intime >> c.checktime;
		pq.push(c);
	}


	int nexttime = 0;


	while (!pq.empty())
	{
		cow ts = pq.top(); pq.pop();

		int waittime = 0;
		if (ts.intime < nexttime)
		{
			waittime = nexttime - ts.intime;
		}

		nexttime = ts.intime + ts.checktime + waittime;

		Result = nexttime;

	} 

	cout << Result << "\n";

	return 0;
}
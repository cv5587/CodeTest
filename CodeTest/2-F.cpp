#include <bits/stdc++.h>
//boj 2828
using namespace std;
int N, M, J;
//(1 ≤ M < N ≤ 10)
int main()
{
	//N줄수 M바구니크기 J사과개수
	cin >> N >> M >> J;
	vector<int> vecPos;

	for (int i = 0; i < J; i++)
	{
		int a;
		cin >> a;
		vecPos.push_back(a);
	}

	int leftpos = 1;
	int rightpos = leftpos + (M - 1);

	int totalmovecount = 0;

	for (int i = 0; i < vecPos.size(); i++)
	{
		int pos = vecPos[i];
		int movecount = 0;
		if (leftpos > pos)
		{
			movecount = leftpos - pos;

			leftpos -= movecount;
			rightpos -= movecount;
		}
		else if (rightpos < pos)
		{
			movecount = pos - rightpos;

			leftpos += movecount;
			rightpos += movecount;
		}
		else
		{
			continue;
		}

		totalmovecount += movecount;

	}


	cout << totalmovecount << "\n";

	return 0;
}
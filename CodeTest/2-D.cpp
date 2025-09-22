#include <bits/stdc++.h>

using namespace std;
int m, n, k;
int a[104][104];
int visited[104][104];
int sx, sy, ex, ey;
vector <int > w;
int dx[] = { 1 ,0,-1,0 };
int dy[] = { 0,-1,0,1 };


int go(int x, int y)
{
	visited[x][y] = 1;
	
	int ret = 1;
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || ny >= n || nx < 0 || nx >= m )continue;
		if (1 == visited[nx][ny])continue;
		if (1 == a[nx][ny])continue;
		ret += go(nx, ny);
	}
	return ret;
}

int main()
{
	cin >> m >> n >> k;

	
	for (int i = 0; i < k; i++)
	{
		cin >> sx >> sy >> ex >> ey;
		for (int y = sx; y < ex; y++)
		{
			for (int x = sy; x < ey; x++)
			{
				a[x][y] = 1;
			}
		}
	}



	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (0 == visited[i][j] && 1 != a[i][j])
			{
				w.push_back(go(i, j));
			}
		}
	}
	sort(w.begin(), w.end());

	cout << w.size() << '\n';
	for (auto iter : w)
	{
		cout << iter<<" ";
	}

	return 0;
}
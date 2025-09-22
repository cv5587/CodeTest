#include <bits/stdc++.h>

using namespace std;

int N,h;
int a[101][101];
int visited[101][101];

int dy[] = { 0,-1,0,1 };
int dx[] = { 1,0,-1,0 };

void go(int x, int y,int d)
{
	visited[x][y] = 1;
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 ||  nx < 0 || ny >= N || nx >= N) continue;
		if (a[nx][ny] > d && !visited[nx][ny])
		{
			go(nx, ny,d);
		}
	}		
	return;
}

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> h;
			a[i][j] = h;
		}
	}

	int ret = 1;
	for (int  d = 1; d < 101; d++)
	{
		fill(&visited[0][0], &visited[0][0] + 101 * 101, 0);
		int cnt = 0;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (a[i][j] > d && !visited[i][j])
				{
					go(i, j, d);
					cnt++;
				}
			}
		}
		ret = max(ret, cnt);
	}


	cout << ret<<"\n";
	return 0;
}
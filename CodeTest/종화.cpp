#include <bits/stdc++.h>

using namespace std;
const int N = 5;
const int M = 5;
int adj[N][M] = 
{ 
1,0,1,0,1,
1,1,0,0,1,
0,0,0,1,1,
0,0,0,1,1,
0,1,0,0,0 
};
int visited[N][M];
int ay[4] = {0,-1,0,1};
int ax[4] = {1,0,-1,0};
int Result;
int callcount;
void dfs(int x, int y)
{
	visited[x][y] = 1;
	cout << x << "::" << y << "\n";
	for (int s = 0; s < 4; s++)
	{
		int ny = y + ay[s];
		int nx = x + ax[s];

		if (ny < 0 || ny>N || nx < 0 || nx>M)continue;
		if (adj[nx][ny] == 0)continue;
		if (visited[nx][ny] == 1)continue;

		dfs(nx, ny);
	}
}
int main()
{
	for (int x = 0; x < N; x++)
	{
		for (int y = 0; y < M; y++)
		{
			if (adj[x][y] == 1 && visited[x][y] == 0)
			{
				Result++;
				cout << "dfs½ÃÀÛ" << "\n";
				
				dfs(x, y);
			}
		}
	}

	cout << Result << "\n";
}

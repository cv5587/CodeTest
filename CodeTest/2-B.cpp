#include <bits/stdc++.h>

using namespace std;

int T, M, N, K;
vector<int> Result;
int a[51][51];
bool visited[1004][1004];
int dy[] = {0,-1,0,1};
int dx[] = {1,0,-1,0};

void go(int x , int y)
{
	visited[x][y] = 1;
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || M <= nx || nx < 0 || N <= ny) continue;
		if (a[nx][ny] && !visited[nx][ny]) {
			go(nx, ny);
		}
		
	}

}

int main()
{
	cin >> T;
	
	for (int i = 0; i < T; i++)
	{
		cin >> M >> N >> K;

		int x, y;
		
		memset(a, 0, sizeof(a));
		memset(visited, 0, sizeof(visited));

		for (int j = 0; j < K; j++)
		{
			cin >> x >> y;
			a[x][y] = 1;

		}

		int ret=0;
		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (a[i][j] && !visited[i][j])
				{
					go(i, j);
					ret++;
				}
			}
		}
		cout << ret << '\n';
	}

	
	return 0;
}
//2178 미로탐색
#include <bits/stdc++.h>

using namespace std;
int dy[4] = { 1,0,-1,0 };
int dx[4] = { 0,1,0,-1 };
const int max_n = 104;
int a[max_n][max_n];
int main()
{
	int N, M;
	scanf_s("%d %d", &N, &M);
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			scanf_s("%1d", &a[i][j]);
		}
	}

	int visited[max_n][max_n] = { 0, };
	queue<pair<int, int>> q;
	
	q.push({ 0,0 });
	visited[0][0] = 1;
	int x, y;
	while (q.size())
	{
		tie(y, x) = q.front(); q.pop();
		for (int i = 0; i < 4; i++)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny < 0 || ny >= N || nx < 0 || nx >= M || a[ny][nx] == 0)continue;
			if (visited[ny][nx])continue;

			visited[ny][nx] = visited[y][x] + 1;
			q.push({ ny, nx });
		}
	}
	cout << visited[N-1][M-1];
	return 0;
}

//N은 y의 개수 세로줄수 
// M은 x의 개수 가로줄수
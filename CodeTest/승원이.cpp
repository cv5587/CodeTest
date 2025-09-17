#include <bits//stdc++.h>

using namespace std;
int N=5, M=5,sx=0,sy=0,ex=4,ey=4;
int x, y;
int visited[5][5];
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int imap[5][5]=
{
	1,0,1,0,1,
	1,1,1,0,1,
	0,0,1,1,1,
	0,0,1,1,1,
	0,0,1,1,1
};

typedef pair<int, int> POS;
void bfs(int _sy, int _sx)
{

}
int main()
{
	queue < pair<int, int> > q;
	visited[sy][sx] = 1;
	q.push({ sy, sx });

	while (q.size())
	{
		tie(y, x) = q.front();	q.pop();

		for (int s = 0; s < 4; s++)
		{
			int ny = y + dy[s];
			int nx = x + dx[s];

			if (ny < 0 || ny >= N || nx < 0 || nx >= M || imap[ny][nx] == 0)continue;
			if (visited[ny][nx])continue;//방문했다 X 기회비용 이라 1고정이아님

			visited[ny][nx] = visited[y][x] + 1;
			q.push({ ny, nx });

		}
	}
	cout<<"떨군 당근수" << visited[ey][ex]<< '\n';

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << visited[i][j] << ' ';
		}
		cout << '\n';
	}
	return 0;
}
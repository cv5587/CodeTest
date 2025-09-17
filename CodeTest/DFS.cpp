#include <bits/stdc++.h>

using namespace std;

const int V = 10;
vector<int> adj[V];
bool visited[V];
void dfs(int there)
{
	visited[there] = true;
	cout << there << "\n";
	for (int v :adj[there])
	{
		if (visited[v] == false)
			dfs(v);
	}
}
int main()
{
	adj[1].push_back(2);
	adj[1].push_back(3);
	adj[2].push_back(4);
	adj[4].push_back(2);
	adj[2].push_back(5);

	dfs(1);
}

#include <bits/stdc++.h>

using namespace std;

//가치내림,내림 X
//무게 오름, 가방 오름 X
//넣을수 잇는것중에 가치가 높은걸하자,무게르 오름 정렬
typedef long long ll;
int ret;
int main()
{
	int n, k;
	cin >> n >> k;
	vector<pair<ll, ll>>v(n);
	vector<ll>	vv(k);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i].first >> v[i].second;
	}

	for (int i = 0; i < k; i++)
	{
		cin >> vv[i];
	}
	//정렬 생활화.
	sort(v.begin(), v.end());
	sort(vv.begin(), vv.end());


	priority_queue<ll> pq;//가치가 높은걸 찾기위해 정렬되는 q를 쓴거임

	int j = 0;
	for (int i = 0; i < k; i++)
	{
		while (j<n && v[j].first <= vv[i])
		{
			pq.push(v[j++].second);//담을수 있음 계속 담는다.
		}
		if (pq.size()) {
			ret += pq.top();
			pq.pop();
		}
	}
	cout << ret << '\n';


}
#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int temp;
int n;
bool check(int n) {
	if (n <= 1)return 0;//1은 소수아님
	if (n == 2)return 1;//2는 소수
	if (n % 2 == 0)return 0;//짝수는 아님
	for (int i = 2; i*i <= n; i++){
		if (n % i == 0) return 0;//모둘러 연산으로 소수가 아님
	}
	return 1;//위 경우가 아니면 소수임!
}
int go(int idx, int sum) {
	if (idx == n) {
		return check(sum);
	}
	return go(idx + 1, sum + v[idx]) + go(idx + 1, sum);
}
int main() {

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	cout << go(0, 0) << "\n";

	return 0;
}
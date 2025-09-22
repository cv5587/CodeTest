#include <bits/stdc++.h>
using namespace std;
int dp[1004];
int fibo(int n) {
	if (n <= 1)return n; //기저사례

	int ret = dp[n];
	if (ret != -1)return n;//메모이제이션

	return  ret = fibo(n - 1) + fibo(n - 2); // 로직
}
int main() {
	int n = 10;
	memset(dp, -1, sizeof(dp)); //초기화
	int ret = fibo(n);
	cout << ret << '\n';
}
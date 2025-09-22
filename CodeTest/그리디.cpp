#include <bits/stdc++.h>

using namespace std;
int ret,totalAmount = 12100;

vector<pair<int, int>> currency = { {10000,5},{5000,5},{1000,5},{100,5} };
int main()
{
	sort(currency.rbegin(), currency.rend());//내림차순 정렬
	for (auto &c: currency) 
	{
		while (totalAmount>=c.first)
		{
			totalAmount -= c.first;
			c.second--;
			ret++;
		}
	}
	if (totalAmount == 0)cout << ret << "\n";
	else cout << "불가능" << endl;
}
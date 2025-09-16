#include "header.h"
using namespace std;

int height[9] = { 0, };
int sum = 0;
pair<int, int> ret;
void Result()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (sum - height[i]-height[j]== 100)
			{
				ret = { i ,j };
				return;
			}
		}
	}
}

void main()
{

	
	for (int i = 0; i < 9; i++) {
		cin >> height[i];
		sum += height[i];
	}
	Result();
	vector<int> v;
	for (int i = 0; i < 9; i++)
	{
		if (ret.first == i || ret.second ==i)
		{
			continue;
		}
		v.push_back(height[i]);
	}

	sort(v.begin(), v.end());
	for (int i : v)cout << i << " ";
	return;

}
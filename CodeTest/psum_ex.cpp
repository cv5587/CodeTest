#include "bits/stdc++.h"

using namespace std;

int main()
{
	string dopa = "umzunsik";

	string answer1,answer2,answer3;

	answer1 = dopa.substr(0, 3);
	cout << answer1 << "\n";

	for (int i = dopa.length(); i >= 0; i--)
	{
		answer2 += dopa[i];
	}

	answer3 =dopa+ answer2;
	cout << answer1 << "\n";
	cout << answer2 << "\n";
	cout << answer3 << "\n";
}
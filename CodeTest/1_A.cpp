#include "header.h"
using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void main()
{
	int height[8] = { 0, };
	for (int i = 0; i < 8; i++) {
		cin >> height[i];
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = i+1; j < 8; j++)
		{

			if (height[i]>height[j])
			{
				swap(height[i], height[j]);
			}
		}
	}

	for (int i = 0; i < 8; i++)
	{
		cout << height[i] << " ";
	}
}
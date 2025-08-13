#include "bits/stdc++.h"


using namespace std;
int func1 (int N) {
	int result = 0;
	for (size_t i = 1; i <= N; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			result += i;
		}
	}

	return result;
}

int func2(int arr[], int N)
{
	for (size_t i = 0; i < N; i++)
	{
		for (size_t t = i+1; t < N; t++)
		{
			if (100 == arr[i] + arr[t])
				return 1;
		}
	}
	return 0;
}

int func3(int N) {
	for (size_t i = 1; i*i <= N; i++)
	{
		if (N == i * i)
			return 1;
	}
	return 0;
}

int func4(int N) {
	int result = 1;
	while (2*result <=N)
	{
		result * 2;
	}
	return result;
}

void main()
{
	int a, b, c;
	a = func1(16);
	b = func1(34567);
	c = func1(27639);
	cout << a <<"\n" << b << "\n" << c << "\n" << endl;

	int arr1[] = { 1,52,48 };
	int arr2[] = { 50,42 };
	int arr3[] = { 4,13,63,87 };
	a = func2(arr1, 3);
	b = func2(arr2, 2);
	c = func2(arr3, 4);
	cout << a << "\n" << b << "\n" << c << "\n" << endl;

	a = func3(9);
	b = func3(693953651);
	c = func3(756580036);

	cout << a << "\n" << b << "\n" << c << "\n" << endl;
}
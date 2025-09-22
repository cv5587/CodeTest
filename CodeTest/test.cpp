#include <bits/stdc++.h>	

using namespace std;

int main()
{
	string strNo = "æ»≥Á«œººø©";

	size_t dwLength = strNo.size();

	char arr_chTemp[28] = { 0, }; //9*3+1;

	memcpy(arr_chTemp, strNo.c_str(), dwLength);

	cout << sizeof(arr_chTemp) << '\n';

	for (int i = 0; i < sizeof(arr_chTemp); i++)
	{
		cout<<arr_chTemp[i] << " ";
	}
	cout << '\n';
	cout << arr_chTemp << '\n';
}
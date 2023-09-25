#include<iostream>
#include<string>
using namespace std;
//BF算法时间复杂度为O(mn)，因为i=i-j+2回溯
int test(string &a, string &b)
{
	int i = 0;
	int j = 0;
	while (i < a.size() && j < b.size())
	{
		if (a[i] == b[j])
		{
			i++;
			j++;
		}
		else
		{
			i = i - j + 2;
			j = 1;
		}
	}
	if (j >= b.size() - 1)
	{
		return i - b.size();
	}
	else
		return 0;
}
int main()
{
	string a = "ccaaabaab";
	string b = "aaab";
	cout << test(a, b) << endl;
	system("pause");
	return 0;
}

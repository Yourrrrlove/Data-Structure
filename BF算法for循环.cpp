#include<iostream>
#include<string>
using namespace std;
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
			i = i - j + 1;
			j = 0;
		}
	}
	if (j >= b.size())
	{
		return i - b.size();
	}
	else
		return 0;
}
int test2(string& a, string& b)
{
	int i;
	int j;
	for (i = 0; i < a.size(); )
	{
		for (j = 0; j < b.size();)
		{
			if (a[i] == b[j])
			{
				i++;
				j++;
			}
			else
			{
				i = i - j + 1;
				j = 0;
			}
		}
	}
	if (j >= b.size())
	{
		return i - b.size();
	}
	else
		return 0;
}
int main()
{
	string a = "abccaaabaab";
	string b = "baab";
	cout << test2(a, b) << endl;
	system("pause");
	return 0;
}

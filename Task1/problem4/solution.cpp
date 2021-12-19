#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	vector<string> v;
	string q;
	q = "";
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != ' ')
		{
			q.push_back(s[i]);
		}
		if (s[i] == ' ')
		{
			v.push_back(q);
			q.erase();
		}
		
	}
	v.push_back(q);
	int x = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].size() > x) x = v[i].size();
	}
	int y = x+5;
	for (int i = 0; i < y; i++) cout << '*';
	for (int i = 0; i < v.size(); i++)
	{

		cout << '\n'<<'*'<<' '<< v[i];
		int r = y - (1 + v[i].size());
		for (int j = 0; j < r-2; j++) cout << ' ';
		cout << '*';
	}
	cout << '\n';
	for (int i = 0; i < y; i++) cout << '*';
	return 0;
}

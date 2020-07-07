#include <iostream>
#include <stack>
#include <queue>
#include <string>


using namespace std;

//template <class T1, class T2 >
bool Is_Palind(string n)
{
	bool b = false;
	stack <char>s;
	queue <char>q;
	for (auto i : n)
	{
		if (i == 32)
		{
			continue;
		}
		else
		{
			s.push(toupper(i));
			q.push(toupper(i));
		}
	}
	while (!s.empty())
	{
		if (s.top() == q.front())
		{
			s.pop();
			q.pop();
			b = true;
		}
		else
		{
			b = false;
			break;
		}
	}
	return b;
}
int main()
{
	vector<string> strings{
		"Madam", "lol",
		"tools", "nasa",
		"Roma", "A santa at nasa"
	};
	cout << boolalpha;
	for (auto i : strings)
	{
		bool b = Is_Palind(i);
		cout << b << "\t" << i << endl;
	}
	
	return 0;
}

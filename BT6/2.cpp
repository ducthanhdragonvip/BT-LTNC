#include<iostream>

using namespace std;

int n, m;
int check[999] = { 0 };
char a[999];

void in()
{
	for (int i = 0; i < m; i++)
		cout << a[i];
	cout << endl;
}

void Try(int k)
{
	for (int i = 97; i <= 97 + n - 1; i++)
	{
		if (!check[i])
		{
			a[k] = i;
			check[i] = 1;
			if (k == m)
				in();
			else
				Try(k + 1);
			check[i] = 0;
		}
	}
}

int main()
{
	cin >> n >> m;
	Try(0);
}

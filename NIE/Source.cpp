#include <iostream>
#include <string>
#include <vector>

using namespace std;

 string sum(long long a, long long b)
{
	 unsigned long long suma = 0;
	 unsigned long long sumb = 0;
	while (a > 0)
	{
		suma += a%10;
		a = a/10;
	}
	while (b > 0)
	{
		sumb += b%10;
		b = b/10;
	}
	if (suma == sumb)
	{
		return "=";
	}
	else if (suma > sumb)
	{
		return ">";
	}
	else if (suma < sumb)
	{
		return "<";
	}
	else
	{
		return 0;
	}

}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	unsigned long long q;
	cin >> q;
	vector<string>z;
	for (int i = 0; i < q; i++)
	{
		unsigned long long a, b;
		cin >> a >> b;
		z.push_back(sum(a, b));
	}
	for (int i = 0; i < z.size(); i++)
	{
		cout << z[i] << endl;
	}
}
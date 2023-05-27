#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
	int db, tb, wb, dm, tm, wm, dt, tt;
	int b, m, t;
	cin >> db >> tb >> wb;
	b = db + tb + wb;
	cin >> dm >> tm >> wm;
	m = dm + tm + wm;
	cin >> dt >> tt;
	t = dt + tt;
	
	if (t == m && t ==b )
	{
		cout << "BUS" << endl;
	}
	else if (m < b && m <= t)
	{
		cout << "METRO" << endl;
	}
	else if (t < m && t < b)
	{
		cout << "TAXI" << endl;
	}
	else if (b <= m && b < t)
	{
		cout << "BUS" << endl;
	}
}
#include <iostream>
#include<cmath>
using namespace std;

int main() 
{
    int a, b, x, y;
    double n, m;
    cin >> a;
    cin >> b;
    cin >> x;
    cin >> y;
    n = (a-x) + 2 * (b-y);
    m = a + 2*b;
    n = (n/m);
    if (n >= 0.51)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
  
}


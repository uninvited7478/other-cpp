#include <iostream>
#include <fstream>
#include <time.h>
#include <cstdlib>

using namespace std;


int main()
{
    srand(time(NULL));
    int licz;
    double x, y, a, b;
    x = 10;
    y = 10;

    ofstream plik("dane1.txt");
    plik << x <<" "<<y<<endl;
    for(int i = 1; i < 30100; i++)
    {
        
        licz = rand()%100 + 1;
        if(licz <= 85)
        {

            a = 0.85*x + 0.04*y;
            b = -0.04*x + 0.85*y + 1.6;
            plik <<a<<" "<<b<<endl;
            x = a;
            y = b;



        }

        if(licz > 85 && licz <= 92)
        {
            a = 0.2*x - 0.26*y;
            b = 0.23*x + 0.22*y + 1.6;
            plik <<a<<" "<<b<<endl;
            x = a;
            y = b;
        }

        if(licz > 92 && licz <= 99)
        {
            a = -0.15*x + 0.28*y;
            b = 0.26*x + 0.24*y + 0.44;
            plik <<a<<" "<<b<<endl;
            x = a;
            y = b;
        }

        if(licz == 100)
        {
            a = 0;
            b = 0.16*y;
            plik <<a<<" "<<b<<endl;
            x = a;
            y = b;
        }
    }

    plik.close();
    return 0;

}

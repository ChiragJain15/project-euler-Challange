#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int i, j, c;
    for (i = 0; i < 500; i++)
    {
        for (j = 0; j < 500; j++)
        {
            for (int k = 0; k < 500; k++)
            {
                if (pow(i, 2) + pow(j, 2) == pow(k, 2) && i + j + k == 1000)
                {
                    cout<<i * j * k;
                    return 0;
                }             
            }
        }
    }
}
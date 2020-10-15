#include <iostream>

using namespace std;
int main()
{
    int a = 0, b = 1, sum = 0;
    while (a < 4000000)
    {
        a = b + a;
        b = a + b;
        if (a % 2 == 0)
            sum += a;
        if (b % 2 == 0)
            sum += b;    
    }
    cout<<sum<<endl;
}
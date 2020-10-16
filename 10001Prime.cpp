#include <iostream>
using namespace std;

bool isPrime(int a);

bool isPrime(int a)
{
    for (int i = 3; i < a; i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int count =0, i = 1;
    while (count < 10001)
    {
        if(isPrime(i))
            count++;
        i = i + 2;
    }
    cout<<i - 2;
}
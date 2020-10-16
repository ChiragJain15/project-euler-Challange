#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int a);

bool isPrime(int a)
{
    for (int i = 3; i < a; i = i + 2)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}

int main()
{
    long long int a = 600851475143, largest;
    for (int i = 3; i < sqrt(a); i += 2)
    {
        if (a % i == 0)
        {
            if(isPrime(i))
                largest = i;
        }
        cout<<i<<endl;
    }
    cout<<"The largest element is "<<largest<<endl;
}
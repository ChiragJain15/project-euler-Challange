#include <iostream>
#include <math.h>
#include "isPrime.h"

using namespace std;

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
    }
    cout<<"The largest element is "<<largest<<endl;
}



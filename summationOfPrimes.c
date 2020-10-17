#include <stdio.h>
#include <stdbool.h>


bool isPrime(int a);

bool isPrime(int a)
{
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}

int main()
{
    long int sum = 0, i = 2;
    while (i < 2000000)
    {
        if(isPrime(i))
            sum +=  i;
        i++; 
        printf("%ld\n", i);   
    }
    printf("%ld",sum);
    return 0;
}
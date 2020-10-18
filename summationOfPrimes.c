#include <stdio.h>
#include <stdbool.h>

bool isPrime(int a);

bool isPrime(int a)
{
    for (int i = 2; i < a / 2; i++)
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
        printf("%d\n", i);  
    }
    printf(" sum is %d",sum);
    return 0;
}
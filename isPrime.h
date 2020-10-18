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
# include <iostream>
using namespace std;

bool isPalindrome(int a);
bool isPalindrome(int a)
{
    int digits[6], i = 0;
    while(a > 0)
    {
        digits[i] = a % 10;
        a /= 10;
        i++;
    }
    for (int j = 0; j < i/2; j++)
    {
        if (digits[j] != digits[i - j - 1])
            return false;
    }
    return true;

}
int main()
{   
    int largest = 0;
    for (int i = 100; i < 1000; i++)
    {
        for (int j = i; j < 1000; j++)
        {
            if (isPalindrome(i * j))
            {
                int number = i*j;
                if (number > largest)
                    largest = number;
            }       
        }
    }
    cout<<largest<<endl;
    return 0;
}
#include <iostream>
using namespace std;

bool ismultiple(int a);
bool ismultiple(int a)
{
    for (int i = 2; i <= 20; i++)
    {
        if (a % i != 0)
            return false;
    }
    return true;
}

int main()
{
    int i = 2;
    while(1)
    {
        if(ismultiple(i))
        {
            cout<<i<<endl;
            break;
        }    
            i = i + 2;  
    }
    return 0;
}
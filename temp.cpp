#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char a[1001] = "";
    int product = 1, largest;
    int size = strlen(a);
    for (int i = 0; i < 13; i++)
        product *= (a[i] - 48);
    largest = product;
    for (int i = 13; i <= size; i++)
    {   
        if ((a[i - 13] - 48) != 0)
            product /= a[i - 13] - 48;
        product *= (a[i] - 48);
        if (product > largest)
            largest = product;
    }
    cout<<largest<<endl;
    return 0;
}
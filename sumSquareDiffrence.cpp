#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long int n;
    cout<<"Enter Number: "<<endl;
    cin>>n;
    cout<<long(pow(((n * (n + 1)) / 2), 2) - ((n * (n + 1) * (2 * n + 1)) / 6));
}
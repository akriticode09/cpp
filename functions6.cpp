#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact =1;
    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    return fact;
}
int ncr(int n,int r)
{
    
    int fact_n = factorial(n);
}
int main()
{
    int n=8,r=2;
    ncr(n,r);
    cout<<ncr(n,r)<<endl;
}
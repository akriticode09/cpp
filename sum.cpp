#include <iostream>
using namespace std;
int main()
{
    int n,i,sum = 0;
    cout<<"enter a number";
    cin>>n;
    for(i=0;i<n;i++)
    {
        sum=sum+i;
    }
    cout<<sum<<endl;
    return 0;
}
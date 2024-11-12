#include<iostream>
using namespace std;
int main()
{
    int n,i,evensum =0;
    cout<<"enter a number";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        if(n%2==0)
        {
            evensum = evensum+i;
        }
    }
    cout<<evensum<<endl;
    return 0;
}
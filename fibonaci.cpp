#include <iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"enter a number"<<endl;
    cin>>n;

    int a=0;
    int b=1;
    for(int i=1;i<=n;i++)
    {
        int  nextnumber = a+b;
        cout<<nextnumber<<" ";
        a=b;
        b = nextnumber;

    }
}
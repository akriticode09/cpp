#include<iostream>
using namespace std;
int main()
{
    int n=4,i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j>0;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
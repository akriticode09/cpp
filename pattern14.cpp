#include<iostream>
using namespace std;
int main()
{
    int n=4,i,j;
    for(i=0;i<n;i++)
    {
        for(j= 0;j<n-i-1;j++)
        {
            cout<<" ";
            for(j=1;j<=i+1;j++)
            {
                cout<<j;
            }
            for(j=i;j>0;j--)
            {
              
            }

        }
        cout<<endl;
    }
}
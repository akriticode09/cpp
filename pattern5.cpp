#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter a number"<<endl;
    cin>>n;
    
    for(i=1;i<n;i++)
    {
        for (j=0;j<i;j++)
        {
            cout<<i;
            
        }
        cout<<endl;
    }
}
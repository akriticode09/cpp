#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    if(n>0){
        cout<<"positive"<<endl;
    }
    else if(n<0)
    {
        cout<<"negative number"<<endl;
    }
    else{
        cout<<"zero"<<endl;
    }
}
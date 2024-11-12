#include <iostream>
using namespace std;
// sum of two numbers
int sum(int a,int b)
{
    int s = a+b;
    
    return s;
    
}
// min of 2 numbers 
int minoftwo(int a ,int b)//parameters
{
    if(a<b)
    {
        return a;
    }
    else{
        return b;
    }
    }

int main()
{
    cout<<sum(10,15) << endl;
    cout << (10+15)<<endl;
   
    cout<<"min="<<minoftwo(5,3)<<endl;//arguments
}

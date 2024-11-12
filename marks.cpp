#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter the marks";
    cin>>marks;
    if(marks>=90)
    {
        cout<<"A"<<endl;
    }
    else if(marks<90 && marks>=80)
    {
        cout<<"B"<<endl;
    }
    else if(marks<80 && marks>=70)
    {
        cout<<"c"<<endl;
    }
    else
    {
        cout<<"D"<<endl;
    }
    return 0;

}
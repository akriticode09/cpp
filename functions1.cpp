#include <iostream>
using namespace std;

//function definition
int  printHello()
{
    cout<<"hello\n";
    return 3;
}
int main()
{
//function call
printHello();
printHello();
int val = printHello();
cout<<"val="<< val<<endl;
cout<<printHello()<<endl;
return 0;
}
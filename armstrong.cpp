#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num = n, sum =0;
    while(n>0)
    {
        int lastdigit = n%10;
        sum = sum + (lastdigit*lastdigit*lastdigit);
        n = n/10;
    }
    if(num == sum){
        cout<<"armstrong no.";

    }else{
        cout<<"not an armstrong no.";
    }
}
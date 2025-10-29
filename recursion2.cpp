#include<bits/stdc++.h>
using namespace std;
void f(int i,int n){
    if(i<n){
        return;
    }else{
        cout<<i<<endl;
        f(i-1,n);
    }
}
int main(){
    int i,n;
    cin>>i>>n;
    f(i,n);
}
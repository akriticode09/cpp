#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>vec = {1,23,43} ;
    cout<<"size = "<< vec.size()<<endl;
    vec.push_back(25);
    vec.push_back(24);
    cout<<"new size ="<<vec.size()<<endl;
    vec.pop_back();
    cout<<"now size = "<<vec.size()<<endl;
   for(int val: vec){
    cout << val<< endl;
   }
   cout <<"front value = "<< vec.front()<<endl;
   cout <<"back value = "<< vec.back()<<endl;
   cout << "index 2 = " << vec.at(2)<< endl;
   cout << "capacity = "<< vec.capacity()<<endl;

}
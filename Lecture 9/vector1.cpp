#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec = {1,2,3,4,4};
    vec.push_back(9);
    vec.pop_back();
    cout<<"Size = "<<vec.size()<<endl;
    for(int value: vec){
        cout<<value<<" ";
    }          
    cout<<endl<<"The front value is:"<<vec.front();         
      cout<<endl<<"The back value is:"<<vec.back()<<"\n"; 
      cout<<vec.at(3)<<endl;
}
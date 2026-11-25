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
//The memory allocation which is performed by compilation time is known as static allocation of memory.The memory allocation for compile time is allocated in stack.e.g arrays.
//The memory allocation is reserved in runtime which is known as dynamic allocation of memory.The memory reserved for dynamic allocation in haep.e.g vector.
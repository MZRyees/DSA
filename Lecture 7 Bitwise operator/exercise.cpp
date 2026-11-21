#include<iostream>
using namespace std;
int main()
{
    int numb;
    cout<<"Please enter a number:"<<endl; 
    cin>>numb;
    if(numb>0 && (numb & (numb-1))==0){
        cout<<"power of two"<<endl;
    } else cout<<"NOt Power of two:"<<endl;
    return 0;
}
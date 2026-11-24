#include<iostream>
using namespace std;
void changeArr(int arr[4], int size){
    cout<<"In function \n";
    for (int i = 0; i < size; i++)
    {
        arr[i] *=2;
    }
}
int main()
{
    int arr[4] = {1,2,3,4};
    changeArr(arr,4);
    cout<<"In main \n";
    for (int i = 0; i < 4; i++)
    {
     cout<<arr[i]<<" ";
    }
    cout<<endl;
}
// in C++ array is implicitly a pointer. Used to store the adress of an element.
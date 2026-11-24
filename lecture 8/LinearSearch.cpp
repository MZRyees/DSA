#include<iostream>
using namespace std;
int linearSearch(int arr[], int size,int target){
    for (int  i = 0; i < size; i++)
    {
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[5] ={44,55,66,88,9};
    int target, size=5;
    // int match;
    cout<<"Enter target value:";
    cin>>target;
    cout<<"The value is found at index:"<<linearSearch(arr, size, target)<<endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     if (arr[i]==target)
    //     {
    //         match = i;
    //     }
    // } 
        // cout<<"The targetted value is in index :"<<match<<"\n";
    return 0;
}
#include<iostream>
using namespace std;
void uniqueOrNot(int arr[],  int size){
    for (int i = 0; i < size; i++)
    {
    int count = 0;
    for (int j = 0; j < size; j++)
    {
        if(arr[i] == arr[j])
            count++;
        }
        if(count==1)
            cout<<arr[i]<<" ";
    }
    
    }
int main()
{
    int arr[9]= {4,3,5,1,2,3,4,6,8};
    int size = 9;
    uniqueOrNot(arr,size);
    return 0;
}
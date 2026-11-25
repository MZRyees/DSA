#include<iostream>
using namespace std;
void maxAndMin(int arr[] , int size){
    int Max = 0,Min = 0;
            for (int i = 0; i < size; i++)
            {
                if(arr[i]> arr[Max]) Max = i;
                if(arr[i] <arr[Min]) Min = i;
            }
            cout<<"Largest:"<<arr[Max]<<endl;
            cout<<"Smallest:"<<arr[Min]<<endl;
            swap(arr[Max], arr[Min]);
        }
int main() 
{
   int arr [7] = {10,20,30,40,50,60,70};
   int size = 7;
   maxAndMin(arr,size);
   cout<<"After swapping:"<<endl;
            for (int i = 0; i < size; i++)  
            {
                cout<<arr[i]<<" ";
            } 
   return 0;
}
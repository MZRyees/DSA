#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {-1,44,55,88,-10};
    int largest = INT16_MIN;
    int smallest = INT16_MAX;
    for (int i = 0; i < 5; i++)
    {
       largest = max(arr[i], largest);
       smallest = min(arr[i], smallest);
    }
    cout<<"The largest Number is:"<<largest<<endl;
    cout<<"The Smallest Number is:"<<smallest<<endl;
    
}
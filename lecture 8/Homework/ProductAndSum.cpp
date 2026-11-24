#include<iostream>
using namespace std;
void sumAndProduct(int arr[], int size) 
{
    int sum = 0, product = 1;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
        product*=arr[i];
    }
    cout<<"The sum of array is:"<<sum<<endl;
    cout<<"product of array is:"<<product<<endl;
}
int main()
{
    int size = 5;
 int arr[5] = {2,4,6,8,10};
 cout<<"The given array is:"<<endl;
 for (int i = 0; i < size; i++)
 {
    cout<<arr[i]<<" ";
 }
 cout<<endl;
 sumAndProduct(arr,size);
    return 0;
}
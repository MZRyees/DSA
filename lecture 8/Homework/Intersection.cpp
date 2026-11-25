#include<iostream>
using namespace std;
void intersection(int arr1[],int size1, int arr2[], int size2){
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i]==arr2[j])
            {
                cout<<arr1[i]<<" ";
            }
            
        }
        
    }
    
}
int main(){
    int arr1[4]={1,2,3,4};
    int arr2[6] = { 2,1,3,4,56,8};
    int size1 = 4, size2 = 6;
    intersection(arr1,size1,arr2,size2);
}
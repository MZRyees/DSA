#include<iostream>
using namespace std;
int main()
{
    int i;
    int array[6]= {11,22,4,77,88,5};
    int maxIndex = 0;
    int minIndex = 0;
    for(int i = 0;i<6;i++){
        if(array[i] > array[maxIndex]){
                maxIndex = i;
      }
      else if(array[i] < array[minIndex]){
        minIndex = i;
      }
    } 
    cout<<"The largest value is: "<<array[maxIndex]<<" at index "<<maxIndex<<endl; 
    cout<<"The Smallest value is: "<<array[minIndex]<<" at index "<<minIndex<<endl;   
    return 0;
}
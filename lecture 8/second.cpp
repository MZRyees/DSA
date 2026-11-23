#include<iostream>
using namespace std;
int main()
{
    int smallest = INT16_MAX;
           int value[4] = {11,22,5,66};
           for (int i = 0; i < 4; i++)
           {
           if(value[i]<smallest){
            smallest=value[i];
           }
        }
            cout<<"The Smallest Number is:"<<smallest<<endl;               
}
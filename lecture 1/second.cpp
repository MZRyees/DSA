#include<iostream>
using namespace std;
int main()
{
    int count =1, lastNumb, sum = 0;
    cout<<"Enter Last Number:"<<endl;
    cin>>lastNumb;
    // for(count = 1; count<=lastNumb;count++){
    while (count<=lastNumb)
    {
         sum+=count;
        count++;
    }
     cout<<"Your sum is :"<<sum <<endl;
        // sum+= count;
    // }
    // cout<<"Your sum is :"<<sum <<endl;
    return 0;
}
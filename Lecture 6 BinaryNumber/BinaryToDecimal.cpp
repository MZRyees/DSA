#include<iostream>
using namespace std;
int DeciToBinary(int binaryNum){
    int ans=0, pow = 1;
    while (binaryNum>0)
    {
    int remainder= binaryNum%10;
    ans+=(pow *remainder);
    binaryNum/=10;
    pow*=2;
    }
    return ans;
}
int main()
{
    int binaryNum;
        cout<<"Kindly enter decimal Number:";
        cin>>binaryNum;
        cout<<DeciToBinary(binaryNum);
}
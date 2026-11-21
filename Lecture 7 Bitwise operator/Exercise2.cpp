#include<iostream>
using namespace std;
int reverseNumber(int n){
    int rev = 0;
    while (n>0)
    {
        int digit = n%10;
        rev =rev*10+digit;
        n=n/10;
    }
    return rev;
}
int main()
{
            int numb;
            cout<<"Enter any number to reverse:";
            cin>>numb;
            cout<<"The Reversed number is:"<<reverseNumber(numb)<<endl;
}
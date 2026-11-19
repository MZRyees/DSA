#include<iostream>
using namespace std;
void sumofDigits(int num){
    int digitSum=0;
    int lastDigit;
   while (num>0)
   {
    lastDigit = num%10;
    num /= 10;
    digitSum+=lastDigit;
   }
    cout<<"Sum of Digits = "<<digitSum<<endl;
}
int main()
{
    sumofDigits(12345);
}
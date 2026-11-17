#include<iostream>
using namespace std;
 int main()
 {
//  int sum =0, num;
//  cout<<"Enter Number:";
//  cin>>num;
//  for(int i=1;i<=num;i++){
//     if(i%3==0){
//         cout<<i<<" ";
//         sum+=i;
//     }
// }
//  cout<<"\nYour sum = "<<sum<<endl;

//print factorial of n number
double factorial =1,i=1,number;
cout<<"Enter Number:";
 cin>>number;
 while (i<=number)
 {
    factorial*=i;
    i++;
 }
 cout<<"Your Factorail of a number "<<number<<" is :"<<factorial<<endl;
 }
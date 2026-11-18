#include<iostream>
using namespace std;
void minOfTwoNumbers(int a, int b){
    if(a>b){
       cout<<" a= "<<a<<" is Maximum:"<<endl;
    }
    else {
        cout<<"b= "<<b<<" is maximum:"<<endl;
    }
}
int main(){
    
   minOfTwoNumbers(9,15);
}
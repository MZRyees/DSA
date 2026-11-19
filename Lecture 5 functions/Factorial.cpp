#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i = 1; i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
  cout<<"Factorial of N number is:"<<factorial(5);
}
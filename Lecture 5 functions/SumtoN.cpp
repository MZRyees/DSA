#include<iostream>
using namespace std;
int sumOFN(){
    int n= 10;
    int sum = 0;
    for(int i = 1;i<=n;i++){
        sum+=i;
    }
     cout<<"The Sum of 1 to "<<n<<" number is:"<< sum;
}
int main()
{
    sumOFN();
}
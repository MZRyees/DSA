#include<iostream>
using namespace std;
int main()
{
    // int i =1;
    // while (i<=5)
    // {
    // cout<<i<<" ";
    // i++;
    // }

    // int n=100, sum = 0;
    // for(int i=1;i<=n;i++){
    //     sum+=i;
    //     // sum = n*(n+1)/2;
    // }
    // cout<<"Sum is:"<<sum<<endl;

    //Same logic using while Loop
    // int  i = 1, sum =0, n =100;
    // while(i<=n){
    //     sum+=i;
    //     i++;
    // }
    // cout<<"Sum = "<<sum<<endl;

    //print odd number from 1 to n              
    // int n =20, oddSum =0,i=0;
    // for(int i =1;i<=n;i++){
    //     if(i%2!=0){
    //          cout<<i<<" ";
    //         oddSum+=i;
    //     }                                    
    // }
    // cout<<"\nSum of odd number from  1 to "<<n <<" is:"<<oddSum<<endl;
    
    //Same logic using while loop to print even Number from 1 to n.
    // int evenSum =0, i =1,n = 10;
    // while (i<=n){
    //     if(i%2==0){
    //         cout<<i<<" ";
    //         evenSum+=i;
    //     }
    //     i++;
    // }
    // {
    //     cout<<"\nSum of even Number from 1 to "<<n<<" is:"<<evenSum<<endl;
    // }

    //Do while Loop
    // int i =1, n =10;
    // do{
    //     cout<<i<<" ";
    //     i++;
    // } while (i<=n);
    // cout<<endl;

    //Is prime or not using while loop
    int i=2,n =11;
    bool isPrime = true;
    while (i*i<=n)
    {
        if(n%i==0){
           isPrime = false;
            break;
        }
         i++;
}
if(isPrime==true){
    cout<<"Prime Number:"<<endl;                   
}
else{
    cout<<"Non PRime Number:"<<endl;
}
return 0;
    }

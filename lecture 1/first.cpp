#include<iostream>
using namespace std;
// void EvenOdd(int N){
// if(N%2==0){
//     cout<<N<<" is an Even Number :"<<endl;
// }
// else {
//     cout<<N<<"Odd Number"<<endl;
// }
// }
int main()
{
    int Number;
    //  EvenOdd(9);
    cout<<"Enter NUmber:"<<endl;
    cin>>Number;
    if(Number%2==0){
        cout<<"The Enter Number "<<Number<<" is an Even Number:"<<endl;
    }
    else{
        cout<<"The Enter Number "<<Number<<" is an Odd Number:"<<endl;
    }
}
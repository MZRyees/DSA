#include<iostream>
using namespace std;
int ConvertDeciToBinary(int deciNumb){
    int ans = 0, pow = 1;
    while (deciNumb>0)
    {
       int reaminder = deciNumb%2;
       deciNumb /= 2;
       ans += (reaminder*pow);
        pow*=10;
    }
    return ans;
}
int main(){
    int decinumber = 5;
    for(int i = 0;i<10; i++){
    cout<<ConvertDeciToBinary(i)<<endl;
    }
    return 0;
}
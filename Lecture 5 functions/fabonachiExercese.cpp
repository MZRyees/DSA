#include <iostream>
using namespace std;
void PrintFabonachi(int n){
      int a = 0, b =1;
      for(int i = 0;i<n;i++){
        cout<<a<<" ";
        int numb = a+b;
        a = b;
        b = numb;
        }
}
int main() {
     int n;
    cout<<"Enter any number:";
    cin>>n;
    PrintFabonachi(n);
    return 0;
}
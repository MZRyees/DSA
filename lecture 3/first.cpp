#include<iostream>
using namespace std;
int main()
{
   char ch;
   cout<<"Enter character:";
   cin>>ch;
   if(ch>=65 && ch<97){
    cout<<"Uppercase"<<endl;
   }
   else if (ch>=97 && ch<123)
   {
    cout<<"LowerCase";
   }
   else{
    cout<<"Invalid character";
   }

    return 0;
}
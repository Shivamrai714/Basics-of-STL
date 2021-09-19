#include<bits/stdc++.h>
using namespace std;
int main()
{
   char a; cin>>a;
   cout<<a<<"   ";
    char b; cin>>b;
    cout<<b<<"          ";
   a=a-32;           // to convet to upercase
   cout<<a;

                  // to convert to lowercase
   b=b+32;
   cout<<"\t"<<b;

cout<<endl<<endl;
char n='2';         // also can use stoi(a); func to convert string to interger
cout<<n-48;         // to make it numeric (-48) when given in form of character or string 

cout<<endl;
cout<<a-65<<endl;      // useful when we are hashing the characters with index values
cout<<b-65<<endl;

















	return 0;
}
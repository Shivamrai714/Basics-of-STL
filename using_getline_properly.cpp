#include<bits/stdc++.h>
using namespace std;
int main()
{
	/*
string s;
cin>>s;                       // cursor will remain on the cin line. therefore the getline will 
                               // teh empty line ,after teh cin and skips the main content of the getline input

cout<<s;
for(int i=0;i<4;i++)
{     string str;
	getline(cin,str);
   cout<<str<<"\n ";
 
}

*/

	/*
string str= "shivam";
cout<<str[0]<<" ";
cout<<str.size()<<" ";
str[0]='R';
cout<<str;

*/

// getline  working and cin.ignore() 
/*
   int t;
cin>>t;          // curszor will remain on cin last and geline capture teh exact line after the cin 

cin.ignore();        // use to skip the vacant line after the cin "\n" ogf input
while(t--)
{
string stri;
getline(cin,stri);
cout<<stri<<"\n";

}

*/

/*
// reverse the string using push_back

	string str;
	getline(cin,str);
string rev_str;
for(int i=str.size()-1;i>=0;i--)
{
	rev_str.push_back(str[i]);
}
cout<<rev_str;
if(str==rev_str) cout<<"\nPallindrome string";



*/
/*
// RANGE OF
// data types :  int =10^9              (long int =  10^12)
//               long long int= 10^18
//               


// input large no in form of string 
	// extract integer form string

	string num="2564654664646464646644644642326946479434674";
	int last_no=num[num.size()-1]-48;
	cout<<last_no<<" ";
int first_no=num[0]-48;
cout<<first_no;
cout<<"\n multiply of two no is : "<<first_no*last_no;

*/




string s="sjovam";
string e="sss";
s=s+"al";
cout<<s;





	return 0;
}
 












 

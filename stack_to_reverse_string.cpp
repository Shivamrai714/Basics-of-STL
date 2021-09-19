#include<bits/stdc++.h>
#define ll long long int 
using namespace std;


int main()
{

string n;
cin>>n;
vector<int>v;
for(int i=0;i<n.size();i++) 
	{ v.push_back(n[i]-'a');}

for( int i=0;i<v.size();i++) 
	{ cout<<" "<<v[i];}

/*
  string str;cin>>str;
  stack<char> s;

  for(int  i=0;i<str.length();++i)
  	{  s.push(str[i]); }

  vector<char> v;
  for(int i=str.size()-1;i>=0;--i)
  	{ 
      v.push_back(s.top());
   
   s.pop();
    	}

  for(int  i=0;i<str.length();++i)
  	{  cout<<" "<<v[i]; }


*/
return 0;
}
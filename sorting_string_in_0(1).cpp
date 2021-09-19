#include<bits/stdc++.h>
using namespace std;

const int max_char=26;

void sorted_string(string &s)
{
int char_cnt[max_char]={0};

for(int i=0;i<s.length();i++)
{

	char_cnt[s[i]-'a']++;
}

for (int i = 0; i <max_char; ++i)
{
	for(int j=0;j<char_cnt[j];j++)
    cout<<(char)('a'+i)<<" ";
}



}

int main()
{
string str;
cin>>str;

cout<<"\n THe sorted_string is :  ";
sorted_string(str);
	return 0;
}
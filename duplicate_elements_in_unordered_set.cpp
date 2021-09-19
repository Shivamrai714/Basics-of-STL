#include<bits/stdc++.h>
using namespace std;
int main()
{

unordered_set<int> main;
unordered_set<int> duplicate;
int n;int key=0;
cin>>n;
int a[n];

for(int i=0;i<n;i++) {
	cin>>a[i];
	 key=a[i];
	if(main.find(key)==main.end())
		main.insert(a[i]);
	else 
		duplicate.insert(a[i]);
}
    cout << "\nDuplicate item are : ";
unordered_set<int> :: iterator it;
for(it=duplicate.begin();it!=duplicate.end();it++)
cout<< *it<<"  ";

cout << "\n uncommon  item are : ";
unordered_set<int> :: iterator itr;
for(itr=main.begin();itr!=main.end();itr++)
cout<< *itr<<"  ";



	return 0;
}
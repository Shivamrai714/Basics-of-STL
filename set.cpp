// unorsered set all operation in o(1) 

#include <bits/stdc++.h>
using namespace std;
   
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(3);
    s.insert(7);
    s.insert(2);
  
    cout << "Elements of set in sorted order: \n";
    for (auto it : s)
        cout << it << " ";
  
unordered_set<int> us;
us.insert(3);
us.insert(1);
us.insert(2);
us.insert(6);

cout<<"\n the unordered_set Elements:";
for(auto it: us)
{ cout<<" "<<it;}

unordered_set<string> u;
u.insert("hi");           //O(1)
u.insert("this ");
u.insert("is");
u.insert("shivam");
u.insert("is");

string key="is";

if(u.find(key)==u.end()) cout<<"\n Not found";
else cout<<"\n Found  "<<key;
 
cout<<"\n\n whole Elements: ";
unordered_set<string>:: iterator it;
for(it=u.begin();it!=u.end();it++)
cout<<(*it)<<endl;



    return 0;
}


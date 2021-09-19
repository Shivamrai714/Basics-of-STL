 /*                                  1.   //  LIST 

                                      //  -> accessible front fornt and back
                                      // ->function l.push_back(),push_front(),pop_back(),pop_front()
                                      //  ->,reverse(),sort(),remove(),clear()

#include<bits/stdc++.h>
#include<list>
using namespace std;
 int main()
 {
  list<int> l;

  l.push_back(5);
  l.push_front(1);
 l.push_back(5); 
 l.push_back(3);

cout<<"\n Print using iterator: \n";
 list<int> :: iterator it=l.begin();
 while(it!=l.end()){cout<<" "<<*it;  it++;}

cout<<"\n Printed:: ";

cout<<endl;
  for(int i:l) cout<<i<<" ";
cout<<endl;
 l.erase(l.begin());
  for(auto i:l) cout<<i<<" ";

cout<<"\n teh size of list is: "<<l.size();
cout<<"  \n";
list<int> p(5,10);           // all five are initilize as 100
p.push_front(99);
p.push_front(12);

for(int i:p) cout<<i<<" ";
cout<<"\n";
//p.erase(p.begin());
 p.reverse();      for(int i:p) cout<<i<<" ";cout<<"\n";
p.sort();           for(int i:p) cout<<i<<" ";cout<<"\n";
p.remove(10);        for(int i:p) cout<<i<<" ";cout<<"\n";         // remove will delete all

//  p.clear();      // delete all 

 	return 0;
 }




*/

///////////////////////          2. PRIORITY QUEUE             ////////////////////////

                                /* 
                                ->   helps in arrange in ascending (min heap p_queue) and descinding order (max heap p_queue)
                                ->   functions : empty(),push(),size()


                                */

/*

#include<iostream>
#include<queue>
using namespace std;

int main()
{
// implemented as max heap 
     // max heap
	priority_queue<int> maxi;                 // top_ele will be max no;
   
   // impllemented as min heap
priority_queue<int,vector<int>,greater<int>> mini;


maxi.push(1);
maxi.push(2);
maxi.push(13);

maxi.push(2);

cout<<"  \nsearch whether  it is empty or not: "<<mini.empty();


cout<<"\n size() : "<<maxi.size()<<"\n";
int n=maxi.size();
cout<<"\n Descinding order using p_queue(max heap -p_queue)\n";
for(int i=0;i<n;i++)
{   cout<<" "<<maxi.top();                            // that means we can arange in descending order using p_queue
	maxi.pop();
}

cout<<endl;
// similarly for min queue
mini.push(2);
mini.push(19);
mini.push(20);


cout<<" size() : "<<mini.size()<<"\n";
int n1=mini.size();
cout<<"\n Ascinding order using p_queue(min heap -p_queue)\n";
for(int i=0;i<n1;i++)
{   cout<<" "<<mini.top();    // arange in inc order using p_queue
	mini.pop();
}

cout<<"  \nsearch whether  it is empty or not: "<<mini.empty();







	return 0;
}

*/















/*                           //      3.0  DEQUE
                                        
                                    //->both side operated queue , 



#include<iostream>
#include<deque>
using namespace std;

void display(deque<int> d)
{cout<<"\n   DEQUE ELEMENTS  ... ";

	for(int i:d) {cout<<" "<<i<<" ";} 

cout<<"\n";
}


int main()
{

  deque<int> d;
  d.push_front(1);

  d.push_back(5);
  d.push_back(6);
  d.push_back(7);
  d.push_back(8);


  cout<<"front ele "<<d.front(); cout<<"\n";
  cout<<"back ele   "<<d.back();   cout<<"\n";
cout<<"the ele at index 2 is :"<<d.at(2);  cout<<"\n";
cout<<"\n emepty or not :" <<d.empty();           // 0 means not empty
 cout<<"\n";

cout<<" before erase size : "<<d.size();      display(d); 
d.erase(d.begin(),d.begin()+2);     // means ereses two ele from start.
cout<<" after erase size : "<<d.size(); display(d);





	return 0;

}
*/
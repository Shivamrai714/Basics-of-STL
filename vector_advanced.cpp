

                                    //Mixture of pair and vectors
                                    // (nesting :  vector of pair)

#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;cin>>n;

   pair<int,int>p[n];
  
	vector<pair<int,int>>v;
	for(int i=0;i<n;i++) 
	{
		int a; cin>>a;  int n; cin>>n;
		//p[i]=make_pair(a,n);  v.push_back(p[i]);
    v.push_back({a,n});            // we can also directly use this to insert pair ie {a,n} in vector
	}


	swap(v[0],v[1]);            // now u can easily handle the pair associated in single operation.

v[0].first+=v[1].first;     //        individulally changing the values assoviated
v[0].second+=v[1].second; 

	for(int i=0;i<4;i++)
		{ 
       cout<<v[i].first<<" "<<v[i].second<<"\n";

		 }
cout<<"\n";
cout<<v[0].first;          // need to address the element in vector of there type., eg v[0].first if "pair" is used

cout<<"\n\n";
cout<<"\n\n";

// Trying the pair with characters

int count;
cin>>count;
pair<char,int>pr[count];
vector<pair<char,int>>v1;
for(int i=0;i<count;i++) 
{ 
	char c ; cin>>c;
	 int n; cin>>n; 
 
/* pr[i]=make_pair(c,n);
 v1.push_back(pr[i]);
*/                              // or u can give only one statement directly into the vectors
 
v1.push_back({c,n});

}



swap(v1[0],v1[count-1]);              // testing sussfully 

	for(int i=0;i<count;i++)
		{ 
       cout<<v1[i].first<<" "<<v1[i].second<<"\n";

		 }











	return 0;

}






/*                                 //PAIRS BASICS
#include<bits/stdc++.h>
using namespace std ;



int main()
{
/* pair<int ,int> p[4];
 p[0]=make_pair(2,3);
 p[1]=make_pair(3,4);
 p[2]=make_pair(4,5);
 p[3]=make_pair(5,6);

for(int i=0;i<4;i++)
{cout<<p[i].first<<" "<<p[i].second;
cout<<"\n";}
//
pair<char,string> p1[5];
p1[0]=make_pair('a',"apple");
p1[1]=make_pair('b',"ball");
p1[2]=make_pair('c',"cat");
p1[3]={'d',"dog"};
p1[4]=make_pair('e',"elephant");

for(int i=0;i<5;i++) 
{	cout<<p1[i].first<<"  "<<p1[i].second;
cout<<"\n";
}

pair<char,string> p2[5];
for(int i=0;i<5;i++) {            // copying teh data in another pair
 p2[i].first=p1[i].first;
  p2[i].second=p1[i].second;   
}

p2[0]=p1[1]   ;                       // direct assignment working on single pair
                                      // can be taken as reference as well to make change to original values.
cout<<"\n";
//*cout<<"The pair 2 after update is:  ";
cout<<p2[0].first<<"    "<<p2[0].second;
cout<<"\n";




pair<char,string> &ref=p1[0];                     // pair taken as reference must be referenced at time of declaration
                                                     // declaring simpe pair ,but next line &ref=p1[0], will not work.
 ref.first='r'; ref.second="rai";
 cout<<"\n";
//*cout<<"\n taking reference to p1 and updating ref";
cout<<ref.first<<"   "<<ref.second;
cout<<"\n";
cout<<"\n";

cout<<"\n P1 after update in ref is :  \n\n";
for(int i=0;i<5;i++) 
{	cout<<p1[i].first<<"  "<<p1[i].second;
cout<<"\n";
}





 
return 0;


}

*/













                                           //   VECTOR BASICS

/*#include<bits/stdc++.h>
using namespace std ;



void display_vector(vector<int> &v)         // passed by referce so copy is not created hence O(1)   without & it would cost O(n)
{                                         // size directly availble v.size() , no need to pass in argument
	for(int i=0;i<v.size();i++) 
{ 
cout<<" "<<v[i];
}

}



int main()
{

vector<string> v={"shivam","rai "," is","learnig ","the","use","of","std"};
v.push_back("  that all ");
display_vector(v);


vector<int> v1(5,3);        // all 10 elements will be assigned as 3
/*
display_vector(v1);

vector<int> v2=v1;                // can directly assign to other //not in array but   O(n)
v2.push_back(11);
display_vector(v1);

// but want  to change the original vector then go with reference

/*vector<int>&v3=v1;
v3.push_back(12);
display_vector(v1);



	return 0;
}*/
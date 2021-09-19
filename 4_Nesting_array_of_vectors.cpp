                                 //nesting vectors of vectors
         
         // we will make a temp vector and take input in it, then insert this temp in main vector<V>
 
                        //   METHOD 1           // we will take input from user N (no rows like)  which can be inc or dec in vector so dynamic rows
                          // METHOD 2            //just push the empty vector ( V.push_back(vector<int>());) and then can insert easily directly (no need to create temp) v[i].push_back()    

#include<bits/stdc++.h>
using namespace std ;


void print_vector(vector<int>&v)
{    cout<<" Size :" <<v.size()<<"\n";
  	for(int i=0;i<v.size();i++)                      // length of each vector is given by the v.size .
		{  cout<<" "<<v[i];}
}



int main()
{
vector<vector<int>>V;

  int N; cin>>N; 

for( int i=0;i<N;i++)                 // input of n rows given by user
{                                                 // declaration
      // first make a temp vector then insert it .

    int n; cin>>n;        // lenght of each sub-vector(ie colums)        // dynamically taking input for each columns len in specific row
    vector<int>temp;
    for(int j=0;j<n;j++)
    { int x; cin>>x;               //input elements
  	temp.push_back(x);                      
    }   
                        // "temp" vector pushed in main vector V
  V.push_back(temp);

}

/*
// display vector ie row wise
for(int i=0;i<V.size();++i)
{
	print_vector(V[i]); cout<<"\n";             // loop for display each colums vector
}
*/

// we have main vector as modifible so can insert more vector in it
V.push_back(vector<int>());
V.push_back(vector<int>());   //  pushed an empty vector 

V[0].push_back(66) ;             // ie 10 will be in "first vector ele" of mail vector V


for(int i=0;i<V.size();++i)
{
	print_vector(V[i]); cout<<"\n";             // loop for display each colums vector
}


cout<<"\n"<<V[0][0];               // V[0] is itself a vector 

//*V[0].push_back(66) ;             // ie 10 will be in first vector ele

cout<<"\n\n";
cout<<"\n the size of big vector:(includeing empty vector that we have inserted) "<<V.size();


	return 0;

}

/*
//          if method 2.

// not want to use temp 
  vector<vector<int>>v;          // main vector  

for(int  i=0;i<v.size();i++)   
{  
  v.push_back(vector<int>()) ;   // psuhed an empty vector 
   int n; cin>>n; 
for(j=0;j<n;j++)
{
v[i].push_back(x);

}

}






*/
/*

TEST CASES
5
2
33 22
5 
1 2 3 4 5
3
44 444 444
7
1 2 3 4 5 6 7
1
100
*/



                                    //TOPIC :@2 

                                     // nesting array with fixed rows ans dynamic columns
//}

/*                                     // NESTING ARRAY OF VECTOR

#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<int>&v)
{
	for(int i=0;i<v.size();i++)                      // length of each vector is given by the v.size .
		{  cout<<" "<<v[i];}
}



int main()
{ int N; cin>>N;
                            // here main vector size is fixed ie N : declared like array
  vector<int>v[N];      // declared vector array of 10 size;

for(int i=0;i<N;i++)            // taking input in every row of array of vector
{
          
    int n ; cin>>n;                        // length of each array of vector is taken dynamically in each call
    for(int j=0;j<n;j++)
    {
	  int x; cin>>x; 
    v[i].push_back(x);
    }
}

for(int i=0;i<N;i++) 
{
	print_vector(v[i]);    cout<<"\n";
}


	return 0;
}*/

//INPUTS for above code 
// 5
// 2 22 33
// 4 11 22 33 44
// 2 22 33
// 4 11 22 33 44
// 5 11 22 33 44 55

 //OUTPUT
//  22 33
//  11 22 33 44
//  22 33
//  11 22 33 44
//  11 22 33 44 55
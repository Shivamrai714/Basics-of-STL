/*#include<bits/stdc++.h>
using namespace std;

void swap(int a[],int t,int s)
{
  int temp=a[t];
  a[t]=a[s];
  a[s]=temp;
}



int partition(int a[],int l,int r)
{
	int pivot=a[r];
int i=l-1;

for(int j=l;j<r;j++)
{
	if(a[j]<pivot) {i++; swap(a,i,j);}
}
swap(a,i+1,r);
return i+1;
}



void quicksort(int a[],int l,int r)
{ if(l<r){
	int pi=partition(a,l,r);
	quicksort(a,l,pi-1);              // smaller than ele at partition index
quicksort(a,pi+1,r);                  // greater than ele at partition index
	}
}




int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
quicksort(a,0,n-1);                                    // array are passed by reference pointer only

for(int i=0;i<n;i++) cout<<"  "<<a[i];


	return 0;
}*/






















// try 2                        O(n log n) - avg case         O(n^2) - worst case

#include<bits/stdc++.h>
using namespace std ;
const int N=1e5+10;
int a[N];

void swap (int a[],int p,int q)
{
	int temp;
	 temp=a[p];
	 a[p]=a[q];
	 a[q]=temp;
}


int partition( int a[],int l ,int r)
{
  int i=l-1;  
  int pivot=a[r];

  for(int j=l;j<r;j++)  {
  	if(a[j]<pivot) {i++;  swap(a,i,j); }
  }
  swap(a,i+1,r) ;                  // to swap the pivot from last position to the correct pos.

return i+1;
}



void quicksort(int a[],int l,int r)
{
     
	if(l<r){
	int index = partition( a,l,r);
quicksort(a,l,index-1);
quicksort(a,index+1,r);

}

}





int main()
{
	int n; cin>>n; 
	for(int i=0;i<n;i++) cin>>a[i];

		quicksort(a,0,n-1);

	cout<<"\n Quick sort is running ..";
	for(int i=0; i<n; i++ ) {cout<<" "<<a[i];}
 




	return 0;

}













#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int a[N];

void mergethem(int l,int r,int mid)
{

int l_sz=mid-l+1;
int r_sz=r-mid;

int left[l_sz+1];
int right[r_sz+1];

for (int i = 0; i < l_sz; ++i)
{
    left[i]=a[i+l];
}

for (int i = 0; i < r_sz; ++i)
{
    right[i]=a[i+mid+1];
}

 
left[l_sz] = right[r_sz] = INT_MAX;
int i=0,j=0;

for(int k=l;k<=r;++k)
{
	if(left[i]<=right[j]) a[k]=left[i++];
	else 
		a[k]=right[j++];
}

}


/////

void mergesort(int l,int r)
{
	if(l==r) return;

	int mid=(l+r)/2;

	mergesort(l,mid);
	mergesort(mid+1,r);

mergethem(l,r,mid);
}



int main()
{

int n;
cin>>n;
for(int i=0;i<n;i++) cin>>a[i];

	mergesort(0,n-1);

cout<<"\n the sort array US : "; 

for(int i=0;i<n;i++) 
cout<<"   "<<a[i];




}


/*
#include<bits/stdc++.h>
using namespace std;

 //////////////////  Merge sort by luv bhai //////////
 
const int N = 1e5 + 10;

 
 
int a[N];    // global arr are init to 0 : by default.

 
 
 
void  merge (int l, int r, int mid) 
{
  
 
 
int l_sz = mid - l + 1;
  
 
 
int r_sz = r - mid;
  
 
 
int L[l_sz + 1];
  
 
 
int R[r_sz + 1];
  
 
 
 
for (int i = 0; i < l_sz; i++)
    
 
L[i] = a[i + l];
  
 
 
for (int i = 0; i < r_sz; i++)
    
 
R[i] = a[mid + 1 + i];
  
 
 
 
L[l_sz] = R[r_sz] = INT_MAX;	//  the while loop to copy the reast left; arrray
  
int l_i = 0, r_i = 0;
  
 
 
for (int i = l; i <= r; i++)
    
 
 
    {
      
 
 
if (L[l_i] <= R[r_i])
	
 
 
	{
	  
 
a[i] = L[l_i];
	  
 
l_i++;
	
 
}
      
 
 
      else
	
 
	{
	  
 
 
a[i] = R[r_i];
	  
 
r_i++;
	
 
 
}
    
 
 
}

 
 
 
}


 
 
 
 
 
void mergesort (int l, int r) 
{
  
 
if (l == r)
    
 
return;
  
 
 
int mid = (l + r) / 2;
  
 
 
mergesort (l, mid);
  
 
 
mergesort (mid + 1, r);
  
 
 
merge (l, r, mid);	//  0(n)
} 
 
 
 
int 



main () 
{
  
 
 
int n;
  
 
 
cin >> n;
  
 
 
for (int i = 0; i < n; i++)
    
 
cin >> a[i];
  
 
 
 
 
mergesort (0, n - 1);
  
 
 
 
cout << "\n the sotrted array is: ";
  
 
 
for (int i = 0; i < n; i++)
    
 
    {
      
 
cout << "  " << a[i];
    
 
} 
 
 
 
return 0;

 
 
 
}


 
 



*/
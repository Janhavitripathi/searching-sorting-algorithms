#include<bits/stdc++.h>
using namespace std;
int main()
{   int i,j,n;
cin>>n;
int array[n];
for(i=0;i<n;i++)
{
  cin>>array[i];
}
for(i=0;i<n;i++)
{
  int temp=array[i];
  int j=i-1;
  while(array[j]>temp&&j>=0)
  {
   array[j+1]=array[j];
   j--;
  }
  array[j+1]=temp;
  
}
for(i=0;i<n;i++)
{
  cout<<array[i]<<" ";
}
  return 0;    
}
//insert an element in an array
#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter size of the array ";
     cin>>n;
     int a[n+1],i,x,p;
     cout<<"Enter the array elements ";
     for(i=0;i<n;i++)
          cin>>a[i];
     cout<<"Enter the new value to insert ";
     cin>>x;
     cout<<"Enter the index to insert ";
     cin>>p;
     if(p<0 || p>n)
          cout<<"Invalid Index";
     else
     {
          for(i=n-1;i>=p;i--)
               a[i+1]=a[i];
          a[p]=x;
          cout<<"The elements after insertion are ";
          for(i=0;i<=n;i++)
               cout<<a[i]<<" ";
     }
    return 0;

}
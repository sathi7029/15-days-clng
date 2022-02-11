//index of smallest element in an array
#include<iostream>
using namespace std;
int main()
{
    int n,i,a[20],min,min_pos;
    cout<<"\nenter the array size:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    min=a[0];
    min_pos=0;
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            min_pos=i;
        }
    }
    cout<<"\nsmllest element is:"<<min;
    cout<<"\nsmallest element index:"<<min_pos;
    return 0;
    
}
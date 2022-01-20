/* copy an array in an another array*/
#include<iostream>
using namespace std;
void copy_array(int arr1[],int arr2[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    /*copied*/
    for(i=0;i<n;i++)
    {
        arr2[i]=arr1[i];
    }
    /*display the copied array*/
    for(i=0;i<n;i++)
    {
        cout<<arr2[i]<<"  ";
    }
}
int main()
{
    int arr1[20],arr2[20],n;
    cout<<"\nenter the array size:";
    cin>>n;
    copy_array(arr1,arr2,n);
    return 0;
}
/*second largest element in an  array*/
#include<iostream>
using namespace std;
int second_large(int arr[],int size)
{
    int i,pos,max,max2;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    max=arr[0];
    pos=0;
    for(i=1;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            pos=i;
        }
    }
    max2=arr[size-pos-1];
    for(i=0;i<size;i++)
    {
        if(i!=pos)
        {
            if(arr[i]>max2)
            {
                max2=arr[i];
            }
        }
    } 
    return max2; 
    
}
int main()
{
    int n,arr[20],max2;
    cout<<"\nenter size of the array:";
    cin>>n;
    max2=second_large(arr,n);
    cout<<"\nsecond largest element is:"<<max2;

}
//sum of two primme number
#include<iostream>
using namespace std;
int prime(int n)
{
    int j;
    for(j=2;j<=n/2;j++)
    {
        if(n%j==0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n,i,p1,p2;
    cout<<"\nenter the range:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i==2)
        {
            p1=prime(i);
            if(p1==0)
            {
                p2=prime(i+1);
                if(p2==0)
                cout<<i <<" "<<i+1<<endl;
            }
        }
        else if(i!=2)
        {
            p1=prime(i);
            if(p1==0)
            {
                p2=prime(i+2);
                if(p2==0)
                cout<<i<<" "<<i+2<<endl;
            }
        }
    }
}
//p-02
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,c=1;
    cout<<"\nenter level";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
}
//delete an element from an aarray
#include<iostream>
using namespace std;
int main()
{
	int n,i,a[30],p;
	cout<<"enter the size of the array:"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter element:"<<endl;
		cin>>a[i];
	}
	cout<<"enter the index to delete:"<<endl;
	cin>>p;
	if(p<0 || p>n-1)
	cout<<"invalid index";
	else
	{
		for(i=p;i<=n-2;i++)
		{
			a[i]=a[i+1];
		}
	}
	for(i=0;i<n-1;i++)
	cout<<" "<<a[i];
}
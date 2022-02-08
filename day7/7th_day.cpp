//fibonacci series
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int	a=0,b=1,i;
	int n,s=a+b;
	cout<<"enter the no of terms:\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		s=a+b;
		a=b;
		b=s;
		cout<<a<<endl;
		
	}
}
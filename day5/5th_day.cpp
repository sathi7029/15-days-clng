/* matrix multiplication */
#include<iostream>
using namespace std;
int main()
{
	int i,j,k,r1,r2,c1,c2,a[20][20],b[20][20],res[20][20],sum=0;
	cout<<"enter row and col of a:"<<endl;
	cin>>r1>>c1;
	cout<<"enter row and col of b:"<<endl;
	cin>>r2>>c2;
	while(c1!=r2)
	{
		cout<<"error!agian take row and col"<<endl;
		cout<<"enter row and col of a:"<<endl;
		cin>>r1>>c1;
		cout<<"enter row and col of b:"<<endl;
		cin>>r2>>c2;
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cout<<"enter element of a:"<<endl;
			cin>>a[i][j];
		}
	}
		for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			cout<<"enter element of b:"<<endl;
			cin>>b[i][j];
		}
	}
	cout<<"a matrix:"<<endl;
		for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"matrix b:"<<endl;
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"multiplying"<<endl;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(k=0;k<c1;k++)
			{
				sum=sum+a[i][k]*b[k][j];
						}
							res[i][j]=sum;
			sum=0;
		}
	}
	cout<<"result:"<<endl;
		for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
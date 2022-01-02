/*sum of AP series using c++*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int first_term,total_no,last_term,common_diff,i;
    int sum;
    cout<<"\n enter first term,no of term and common difference:";
    cin>>first_term>>total_no>>common_diff;
    sum=(total_no*(2*first_term+(total_no-1)*common_diff))/2;
    last_term=first_term+((total_no-1))*common_diff;
    cout<<"\n sum of ap series is:";
    for(i=first_term;i<=last_term;i=i+common_diff)
    {
        if(i!=last_term)
        cout<<i<<"+";
        else
        cout<<i<<"="<<sum;
    }

}

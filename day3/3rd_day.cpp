/*change upper to lawer case */
//day3
#include<iostream>
#include<conio.h>
using namespace std;
void character(char cha)
{
    if(cha>='A' && cha<='Z')
    {
        cout<<"\nit is in upprer case,its lawer case is:"<<(cha+32);
    }
    else
    {
        cout<<"\n it is in lawer case ,upper case is:"<<(cha-32);
    }
}
int main()
{
    char ch;
    cout<<"enter any character:";
    cin>>ch;
    character(ch);
    getch();
}
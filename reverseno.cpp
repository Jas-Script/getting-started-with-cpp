#include<iostream>
using namespace std;
int main()
{
int no;
cin>>no;
while(no!=0)
{
int x=no%10;
no=no/10;
cout<<x<<endl;
}
return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    while(b!=0)
    {
        int c=a&b;
        a=a^b;
        b=c<<1;
    }
    cout<<a;
    
}
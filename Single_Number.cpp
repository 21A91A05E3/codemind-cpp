#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int r=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        r=r^a[i];
    }
    cout<<r;
}
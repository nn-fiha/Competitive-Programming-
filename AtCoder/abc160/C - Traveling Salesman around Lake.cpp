#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,i,c=0,mx=0,d=0;
    cin>>k>>n;
    long long int a[n+3];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    mx=k-a[n-1]+a[0];
    for(i=0; i+1<n; i++)
    {
        d=a[i+1]-a[i];
        mx=max(mx,d);
    }
    c=k-mx;
    cout<<c<<endl;


}
